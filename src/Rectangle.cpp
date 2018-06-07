#include <iostream>
#include <string>
#include "Rectangle.h"

Rectangle::Rectangle(float width, float length) : Shape("Rectangle")
{
    m_width = width;
    m_length = length;
}

Rectangle::~Rectangle()
{

}

std::string Rectangle::get_type()
{
  return m_type;
}

float Rectangle::get_area()
{
  float area = m_width * m_length; 
  return area;
}
