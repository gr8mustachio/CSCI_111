#include"Date.h"
#include<iostream>
using namespace std;

void Date::set(Date& self, int mn, int dy, int yr)
{
  self.month=mn;
  self.day=dy;
  self.year=yr;
}

void Date::display(Date& self)
{
  cout << self.month << '/' << self.day << '/' << self.year << endl;
}

Date::string get_month_name(Date& self)
{
  switch(self.month)
  {
    case 1:
      return "January";
    case 2:
      return "February";
    case 3:
      return "March";
    case 4:
      return "April";
    case 5:
      return "May";
    case 6:
      return "June";
    case 7:
      return "July";
    case 8:
      return "August";
    case 9:
      return "September";
    case 10:
      return "October";
    case 11:
      return "November";
    case 12:
      return "December";
    default:
      return "ERROR";
  }
}
