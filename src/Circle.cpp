#include <iostream>
#include <string>
#include "Circle.h"

Circle::Circle(float radius) : Shape("Circle")
{
    m_radius = radius;
}

Circle::~Circle()
{

}

std::string Circle::get_type()
{
  return m_type;
}

float Circle::get_area()
{
  float area = 3.14 * m_radius * m_radius; 
  return area;
}
