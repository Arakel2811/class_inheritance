#include <iostream>
#include <string>
#include "Shape.h"

Shape::Shape(std::string type)
{
  m_type = type;
}

Shape::~Shape()
{
  std::cout << "called Shape's default destructor " << std::endl; 
}

std::string Shape::get_type()
{
  return m_type;
}
