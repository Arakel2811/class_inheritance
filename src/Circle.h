#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "Shape.h"

class Circle : Shape 
{
  private:
    float m_radius;
  public:
    Circle(float radius);
    ~Circle();
    std::string get_type();
    float get_area();
};
#endif
