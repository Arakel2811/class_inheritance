#ifndef SHAPE_H
#define SHAPE_H

#include <string>
class Shape
{
  protected:
    std::string m_type;
  public:
    Shape(std::string type);
    ~Shape();
    virtual std::string get_type();
    virtual float get_area() = 0;
};
#endif
