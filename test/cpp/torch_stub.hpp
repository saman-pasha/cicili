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
struct ScalarType  { int id = 0; };
struct TensorOptions { int id = 0; };

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
inline Tensor from_blob(void*, IntArrayRef s) { return Tensor(s.v, 0.0); }

inline Tensor relu(const Tensor& x)    { return x.unop([](double d){ return d > 0 ? d : 0.0; }); }
inline Tensor sigmoid(const Tensor& x) { return x.unop([](double d){ return 1.0 / (1.0 + std::exp(-d)); }); }
inline Tensor tanh(const Tensor& x)    { return x.unop([](double d){ return std::tanh(d); }); }
inline Tensor softmax(const Tensor& x, long long) { return x; }
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
};

struct LinearImpl : public Module {
  Tensor weight, bias;
  long long in = 0, out = 0;
  LinearImpl(long long i, long long o) : in(i), out(o) {
    weight = Tensor({ o, i }, 0.1);
    bias   = Tensor({ o },    0.0);
  }
  Tensor forward(const Tensor& x) const {
    Tensor r; r.shape = { out };
    double s = 0;
    for (double d : x.data) s += d;
    r.data.assign((size_t)out, s * 0.1);
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

} // namespace torch
