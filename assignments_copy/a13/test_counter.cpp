#include "Webcounter.h"
//let's test that the "header guards" are inside the header file
//by including it a second time
#include "Webcounter.h"
#include "Webcounter.cpp"
#include<iostream>
int main()
{
  //create a Webcounter object
  Webcounter wc;
  wc.load("counter_data.txt");
  std::cout << "From file: " << wc.get() << std::endl;
  wc.reset();
  std::cout << "Should be  0. And it is " << wc.get() << std::endl;
  wc.set(25);
  std::cout << "Should be 25. And it is " << wc.get() << std::endl;
  wc.set(-8);
  std::cout << "Should be 0. And it is " << wc.get() << std::endl;
  wc.hit();
  wc.hit();
  std::cout << "Should be  2. And it is " << wc.get() << std::endl;
  wc.save("counter_data.txt");
  return 0;
}
