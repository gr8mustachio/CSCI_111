#include"Circle.h"
void Circle::set(float r)
{
  radius = r;
}
float Circle::get_area()
{
  return 3.14*radius*radius;
}
float Circle::get_circumference()
{
 return 2*3.14*radius;
}
