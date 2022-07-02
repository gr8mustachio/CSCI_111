//File: 08.cpp
#include<iostream>

using namespace std;

int main()
{
  cout << "Please enter a number between 1 and 10: \n";
  int somenum;
  cin >> somenum;
  if(somenum >= 1 && somenum <= 10)
    cout << "Your number is within the requested range!\n";
  else
    cout << "No, you didn't follow directions. I asked for a number between 1 and 10.\n";
  return 0;
}
