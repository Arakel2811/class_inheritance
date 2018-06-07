#include <iostream>
#include "Shape.h"
#include "Rectangle.h"

int main()
{
  Rectangle rect(8,9);
  std::cout <<  rect.get_area() << std::endl;
  return 0;
}
