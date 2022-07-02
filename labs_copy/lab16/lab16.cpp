#include"Circle.h"
#include<iostream>
using std::cout;
using std::endl;
int main()
{
  Circle c;
  c.set(21);
  cout << c.get_area() << endl << c.get_circumference() << endl;
  return 0;
}
