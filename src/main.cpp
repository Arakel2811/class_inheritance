#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

int main()
{
    Rectangle rectangle(8,9);
    Circle circle(10);
    Shape* shapes[2] = {&rectangle, &circle};
    for (int i = 0; i < 2; ++i) {
        std::cout << shapes[i]->get_type() << " area = " << shapes[i]->get_area() << std::endl;
    } 
    return 0;
}
