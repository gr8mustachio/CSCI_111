#include<iostream>
#include "Date.h"
using namespace std;

// Use this main with "struct Date"
int main()
{
  Date ind;
  set(ind, 7, 4, 1776);
  display(ind);
  cout << "ind's month is: " << get_month_name(ind) << endl;
  return 0;
}

/*
 * Use this main with "class Date"
int main()
{
  Date ind;
  ind.set(7, 4, 1776);
  ind.display();
  cout << "ind's month is: " << ind.get_month_name() << endl;
  return 0;
}
*/
