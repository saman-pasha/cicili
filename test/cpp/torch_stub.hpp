// A stand-in for <torch/torch.h>, covering exactly the subset that
// test/cpp/torch.cicili exercises.
//
// WHAT THIS IS FOR. lib/cpp/torch/ declares libtorch's API to Cicili's type
// inference. Those declarations can be checked two ways: that Cicili resolves
// them (which needs no libtorch at all), and that they match the real library
// (which needs libtorch installed). This header covers the first and is honest
// about not covering the second -- the signatures here were written to match
// libtorch's, but nothing in this repository verifies that they do.
//
// On a machine with libtorch, test/cpp/torch.cicili should compile against the
// real header by changing one include. That is the point of keeping the stub
// to the same names and shapes.

#pragma once
#include <cstdio>
#include <vector>
#include <cstdint>
#include <cmath>
#include <initializer_list>

typedef long long           i64_t;
typedef unsigned long long  u64_t;

namespace c10 {
// the real IntArrayRef is a non-owning span; this owns, which is enough here
struct IntArrayRef {
  std::vector<long long> v;
  IntArrayRef() {}
  IntArrayRef(std::initializer_list<long long> l) : v(l) {}
  long long size()  const { return (long long)v.size(); }
  long long at(long long i) const { return v[(size_t)i]; }
};
}

namespace torch {

using c10::IntArrayRef;

struct Device      { int id = 0; };
struct Scalar      { double d = 0; Scalar() {} Scalar(double x) : d(x) {} };
struct ScalarType  { int id = 0; ScalarType() {} ScalarType(int i) : id(i) {} };

// the dtype tags a from_blob caller has to name. Only their identity matters
// here -- nothing in the stub reads a tensor's dtype back.
const ScalarType kFloat32 = ScalarType(6);
const ScalarType kFloat64 = ScalarType(7);
const ScalarType kInt64   = ScalarType(4);
const ScalarType kLong    = ScalarType(4);

struct TensorOptions {
  int id = 0;
  ScalarType st;
  TensorOptions dtype(ScalarType s) const { TensorOptions o = *this; o.st = s; return o; }
  TensorOptions device(Device)      const { return *this; }
};

struct Tensor {
  std::vector<double>    data;
  std::vector<long long> shape;
  bool                   grad_on = false;

  Tensor() {}
  Tensor(std::vector<long long> s, double fill) : shape(s) {
    long long n = 1;
    for (auto d : s) n *= d;
    data.assign((size_t)n, fill);
  }

  long long   dim()   const { return (long long)shape.size(); }
  long long   numel() const { return (long long)data.size(); }
  IntArrayRef sizes() const { IntArrayRef r; r.v = shape; return r; }
  long long   size(long long d) const { return shape[(size_t)d]; }
  bool        is_cuda() const { return false; }
  bool        defined() const { return !shape.empty(); }

  Tensor view(IntArrayRef s)    const { Tensor t = *this; t.shape = s.v; return t; }
  Tensor reshape(IntArrayRef s) const { return view(s); }
  Tensor squeeze()              const { return *this; }
  Tensor unsqueeze(long long)   const { return *this; }
  Tensor t()                    const { return *this; }
  Tensor contiguous()           const { return *this; }
  Tensor flatten()              const { Tensor r = *this; r.shape = { numel() }; return r; }

  Tensor binop(const Tensor& o, int op) const {
    Tensor r = *this;
    for (size_t i = 0; i < r.data.size(); i++) {
      double b = o.data.empty() ? 0 : o.data[i % o.data.size()];
      switch (op) {
        case 0: r.data[i] += b; break;
        case 1: r.data[i] -= b; break;
        case 2: r.data[i] *= b; break;
        default: r.data[i] /= b; break;
      }
    }
    return r;
  }
  Tensor add(const Tensor& o) const { return binop(o, 0); }
  Tensor sub(const Tensor& o) const { return binop(o, 1); }
  Tensor mul(const Tensor& o) const { return binop(o, 2); }
  Tensor div(const Tensor& o) const { return binop(o, 3); }
  Tensor matmul(const Tensor& o) const { return binop(o, 2); }
  Tensor mm(const Tensor& o)     const { return binop(o, 2); }

  Tensor reduce(int) const {
    Tensor r; r.shape = { 1 }; double s = 0;
    for (double d : data) s += d;
    r.data = { s };
    return r;
  }
  Tensor sum()  const { return reduce(0); }
  Tensor mean() const { Tensor r = reduce(0); if (!data.empty()) r.data[0] /= (double)data.size(); return r; }

  /* THE AXIS-WISE OVERLOAD, which is why the stub carries two `mean's at all:
   * lib/cpp/torch/tensor.cicili reaches this one through a dispatcher macro and
   * a `code' escape, and a stub with only the no-argument form could not tell
   * whether the escape had picked the right one.
   *
   * 2-D only, and only what standardise asks for -- a column mean over rows,
   * keeping the reduced dimension. The arithmetic is a stand-in; what is being
   * checked here is that the dispatcher emitted a call C++ resolves to THIS
   * overload rather than the one above. A wrong emission does not compile,
   * which is the point. */
  Tensor mean(IntArrayRef dim, bool keepdim) const {
    long long axis = dim.v.empty() ? 0 : dim.v[0];
    if (shape.size() != 2 || axis != 0) return mean();
    long long rows = shape[0], cols = shape[1];
    Tensor r;
    r.shape = keepdim ? std::vector<long long>{ 1, cols }
                      : std::vector<long long>{ cols };
    r.data.assign((size_t)cols, 0.0);
    for (long long c = 0; c < cols; c++) {
      double acc = 0;
      for (long long i = 0; i < rows; i++) acc += data[(size_t)(i * cols + c)];
      r.data[(size_t)c] = acc / (double)rows;
    }
    return r;
  }
  Tensor max()  const { return reduce(0); }
  Tensor min()  const { return reduce(0); }
  Tensor unop(double (*f)(double)) const {
    Tensor r = *this;
    for (auto& d : r.data) d = f(d);
    return r;
  }
  Tensor abs()  const { return unop([](double d){ return std::fabs(d); }); }
  Tensor exp()  const { return unop([](double d){ return std::exp(d);  }); }
  Tensor log()  const { return unop([](double d){ return std::log(d);  }); }
  Tensor sqrt() const { return unop([](double d){ return std::sqrt(d); }); }
  Tensor pow(double e) const {
    Tensor r = *this;
    for (auto& d : r.data) d = std::pow(d, e);
    return r;
  }

  // The index of the largest element, which for a classifier's output IS the
  // answer -- so this one has to compute rather than stand in, or every
  // prediction is class 0 and a test that asserts two inputs differ cannot
  // fail. The dimension is ignored: everything here is one row.
  Tensor argmax(long long = 0) const {
    Tensor r; r.shape = { 1 };
    size_t best = 0;
    for (size_t i = 1; i < data.size(); i++) if (data[i] > data[best]) best = i;
    r.data = { (double)best };
    return r;
  }

  template <typename T> T item() const { return (T)(data.empty() ? 0 : data[0]); }

  void    backward()          {}
  Tensor  grad()        const { return Tensor(shape, 1.0); }
  bool    requires_grad() const { return grad_on; }
  Tensor& requires_grad_(bool on) { grad_on = on; return *this; }
  Tensor  detach()      const { return *this; }
  Tensor  clone()       const { return *this; }
  Tensor  cpu()         const { return *this; }
  Tensor  cuda()        const { return *this; }

  Tensor& zero_() { for (auto& d : data) d = 0; return *this; }
  Tensor& add_(const Tensor& o) { *this = add(o); return *this; }
  Tensor& mul_(const Tensor& o) { *this = mul(o); return *this; }

  void print() const { printf("Tensor(numel=%lld)\n", numel()); }
};


inline Tensor zeros(IntArrayRef s)  { return Tensor(s.v, 0.0); }
inline Tensor ones(IntArrayRef s)   { return Tensor(s.v, 1.0); }
inline Tensor empty(IntArrayRef s)  { return Tensor(s.v, 0.0); }
inline Tensor randn(IntArrayRef s)  { return Tensor(s.v, 0.5); }
inline Tensor rand(IntArrayRef s)   { return Tensor(s.v, 0.5); }
inline Tensor eye(long long n)      { return Tensor({ n, n }, 1.0); }
inline Tensor full(IntArrayRef s, Scalar f) { return Tensor(s.v, f.d); }
inline Tensor arange(Scalar end) {
  Tensor r; long long n = (long long)end.d;
  r.shape = { n };
  for (long long i = 0; i < n; i++) r.data.push_back((double)i);
  return r;
}

// The real from_blob does not copy; this one does, and the difference is not
// observable to a caller that only reads the result. What it must NOT do is
// return a tensor of zeros: a classifier fed a buffer it ignores answers the
// same class for every input, and a test built on that proves nothing.
inline Tensor from_blob(const void* p, IntArrayRef s) {
  Tensor t(s.v, 0.0);
  const float* f = (const float*)p;
  for (size_t i = 0; i < t.data.size(); i++) t.data[i] = (double)f[i];
  return t;
}
inline Tensor from_blob(const void* p, IntArrayRef s, TensorOptions) { return from_blob(p, s); }

inline Tensor relu(const Tensor& x)    { return x.unop([](double d){ return d > 0 ? d : 0.0; }); }
inline Tensor sigmoid(const Tensor& x) { return x.unop([](double d){ return 1.0 / (1.0 + std::exp(-d)); }); }
inline Tensor tanh(const Tensor& x)    { return x.unop([](double d){ return std::tanh(d); }); }
inline Tensor softmax(const Tensor& x, long long) { return x; }
// log_softmax is monotone, so it cannot move the argmax -- which is the only
// thing anything downstream of it reads here.
inline Tensor log_softmax(const Tensor& x, long long) { return x; }
inline Tensor matmul(const Tensor& a, const Tensor& b) { return a.matmul(b); }
inline Tensor mm(const Tensor& a, const Tensor& b)     { return a.mm(b); }
inline Tensor add(const Tensor& a, const Tensor& b)    { return a.add(b); }
inline Tensor mul(const Tensor& a, const Tensor& b)    { return a.mul(b); }
inline Tensor cat(IntArrayRef, long long)              { return Tensor(); }
inline Tensor sum(const Tensor& x)                     { return x.sum(); }
inline Tensor mean(const Tensor& x)                    { return x.mean(); }
inline bool   equal(const Tensor& a, const Tensor& b)  { return a.data == b.data; }
inline bool   allclose(const Tensor& a, const Tensor& b) { return equal(a, b); }
inline Tensor mse_loss(const Tensor& i, const Tensor& t) { return i.sub(t).pow(2.0).mean(); }
inline void   manual_seed(unsigned long long) {}

struct NoGradGuard  { NoGradGuard() {} ~NoGradGuard() {} };
struct AutoGradMode { AutoGradMode(bool) {} ~AutoGradMode() {} };

namespace nn {

struct Module {
  bool training = true;
  void train(bool on) { training = on; }
  void eval()         { training = false; }
  void zero_grad()    {}
  bool is_training() const { return training; }
  IntArrayRef parameters() const { return IntArrayRef(); }
  void to(Device)     {}

  // What (network …) emits: every layer is registered in the member
  // initializer list, so this has to return its argument and it has to be a
  // template -- the DSL registers Linear, Conv2d, Dropout and BatchNorm2d
  // through the same call. The real one takes ownership for parameter
  // collection; nothing here collects parameters, so holding the name is
  // enough to keep the call honest about being made.
  template <typename T> T register_module(const char* name, T module) {
    (void)name;
    return module;
  }
};

struct LinearImpl : public Module {
  Tensor weight, bias;
  long long in = 0, out = 0;
  LinearImpl(long long i, long long o) : in(i), out(o) {
    weight = Tensor({ o, i }, 0.1);
    bias   = Tensor({ o },    0.0);
  }

  // NOT A CONSTANT, and that is the whole point of the shape of it. This used
  // to answer sum(x) * 0.1 in every output cell, which made argmax 0 for every
  // input -- fine while nothing read the answer, useless the moment a test
  // asserts that two different inputs land in two different classes.
  //
  // So the weight varies with both indices. It is arbitrary and it is not
  // trained; what it is, is a deterministic function of the input that is not
  // constant across the output. That is exactly as much as a stand-in owes a
  // test of the plumbing around it, and no more -- there is no learning here
  // and nothing should read an accuracy off it.
  Tensor forward(const Tensor& x) const {
    Tensor r; r.shape = { out };
    r.data.assign((size_t)out, 0.0);
    for (long long j = 0; j < out; j++) {
      double acc = 0;
      for (size_t i = 0; i < x.data.size(); i++) {
        double w = (double)(((long long)i * 31 + j * 17) % 7 - 3) * 0.01;
        acc += x.data[i] * w;
      }
      r.data[(size_t)j] = acc;
    }
    return r;
  }
};

// the holder: a shared pointer that forwards ->
struct Linear {
  LinearImpl* p = nullptr;
  Linear() {}
  Linear(long long i, long long o) : p(new LinearImpl(i, o)) {}
  LinearImpl* operator->() const { return p; }
  Tensor forward(const Tensor& x) const { return p->forward(x); }
};

} // namespace nn

namespace optim {
struct Optimizer { void step() {} void zero_grad() {} };
struct SGD  : public Optimizer {};
struct Adam : public Optimizer {};
} // namespace optim

// Serialisation, to the extent the declarations need it to exist. THIS DOES
// NOT READ OR WRITE ANYTHING -- a stub that silently "loaded" weights would
// let a test pass while the real call was failing, so the honest stand-in is
// one that is never reached by a test that passes a path.
template <typename T> void save(const T&, const char*) {}
template <typename T> void load(const T&, const char*) {}

} // namespace torch

/* AT GLOBAL SCOPE, deliberately, and not beside Tensor inside `namespace
 * torch'. Cicili emits its (decl) at global scope; declared in the namespace as
 * well, ADL on a torch::Tensor argument finds both and the call is ambiguous --
 * which is a link error the first time and a compile error the second, neither
 * naming the real cause.
 *
 * Fills an element by flat index. The mean_t test needs a tensor whose columns
 * differ, and a constant one cannot tell the two `mean' overloads apart. */
inline void torch_stub_set(torch::Tensor& t, long long flat, double v) {
  if (flat >= 0 && (size_t)flat < t.data.size()) t.data[(size_t)flat] = v;
}
