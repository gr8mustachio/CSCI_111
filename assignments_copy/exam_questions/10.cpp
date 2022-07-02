//File: 10.cpp
#include<iostream>

using namespace std;

int main()
{
  int favnum;
  cout << "What is your favorite number?";
  cin >> favnum;
  if(favnum==6)
    cout << "Six is my favorite number too!" << endl;
  else
    cout << "That is not my favorite number." << endl;
  return 0;
}
