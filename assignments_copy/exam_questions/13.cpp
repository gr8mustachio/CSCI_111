//File: 13.cpp
#include<string>
#include<iostream>

using namespace std;

int main()
{
  string color;
  cout << "What is your favorite color? ";
  cin >> color;

  if(color.compare("blue") == 0){
    cout << "My favorite color is blue also!\n";
  } else {
    cout << "That is not my favorite color.\n";
  }
  return 0;
}
