//File: 12.cpp
//Correct logic error so that if/else works correctly
//
#include<iostream>

using namespace std;

int main()
{
  cout << "Give me a number between 1 and 5 ";
  int userchoice;
  cin >> userchoice;
  if(userchoice==2 ||userchoice== 4)
    cout << "Number is even!\n";
  else if(userchoice==1 ||userchoice== 3 ||userchoice== 5)
    cout << "Number is odd!\n";
  else
    cout << "You didn't give me a number between 1 and 5!\n";
  return 0;
}
