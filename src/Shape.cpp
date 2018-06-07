#include <iostream>
#include <string>
#include "Shape.h"

Shape::Shape(std::string type)
{
  m_type = type;
}

Shape::~Shape()
{
}

std::string Shape::get_type()
{
  return m_type;
}
