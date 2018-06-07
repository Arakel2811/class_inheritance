#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "Shape.h"

class Rectangle : public Shape 
{
  private:
    float m_width;
    float m_length;
  public:
    Rectangle(float width, float length);
    ~Rectangle();
    std::string get_type();
    float get_area();
};
#endif
