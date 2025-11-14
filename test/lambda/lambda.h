#ifndef __SHAPE_H__
#define __SHAPE_H__
typedef struct Shape {
  int length ;
  int width ;
    void (*dynamicDraw) (struct Shape *   );
} Shape;
void Shape_m_staticDraw (Shape * this );
#endif /* __SHAPE_H__ */ 
