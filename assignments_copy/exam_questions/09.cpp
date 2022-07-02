//File: 09.cpp
#include<iostream>

using namespace std;

int main()
{

  int day;
  cout << "Which day of the week is this (1 through 7)?" << endl;
  cin >> day;

  if(day==2 || day==3) //Monday, Tuesday
    cout << "The workweek is just beginning. Hang in there!\n";
  else if(day==4 || day==5) //Wednesday, Thursday
    cout << "Midweek. The worst is over.\n";
  else if(day==6 || day==7 || day==1) //Friday, Saturday, Sunday
    cout << "Friday and Weekend! Nice.\n";
  else
    cout << "That's not a valid number!" << endl;

  return 0;
}
