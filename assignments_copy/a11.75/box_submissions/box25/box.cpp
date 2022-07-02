#include<iostream>
#include "numcols.h"

using namespace std;

int main()
{
  int userheight;
  int userwidth;
  int how_wide=get_screen_columns();
  
  cout << "How tall is the box?" << endl;
  cin >> userheight;
  cout << "How wide is the box?" << endl;
  cin >> userwidth;
  if (userwidth*2 > how_wide)
  {
    cout << "Screen too small!" << endl;
    return 0;
  }
  {
  for (int rows = 1; rows <= userheight; rows++)
  {
    for (int spaces = 0; spaces < get_screen_columns()/2; spaces++)
      cout << " ";
    { 
      for (int cols = 1; cols <= userwidth*2; cols++)
      {
        if (cols > 1 && cols < userwidth*2 && rows > 1 && rows < userheight)
          cout << " ";
        else
          cout << "*";
      }
      cout << endl;
    }
  }
  }
  return 0;
}
