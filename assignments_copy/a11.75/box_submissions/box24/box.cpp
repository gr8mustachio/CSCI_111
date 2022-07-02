#include<iostream>
#include "numcols.h"
using namespace std;

int main()
{
  int how_wide=get_screen_columns();
  int tall;
  int wide;
  int middle=get_screen_columns()/2;

  cout << "How tall is the box?" << endl;
  cin >> tall;
  cout << "How wide is the box?" << endl;
  cin >> wide;

  if(wide>how_wide)
    cout << "Screen too small!" << endl;
  else
  {
  for(int row=1; row <= tall; row++)
  {
  for(int spaces=0; spaces<middle-((wide*2)/2); spaces++)
    cout << " ";
  for(int col=1; col <= wide*2; col++)
  {
    if(col>1 && col < wide*2 && row>1 && row < tall)
      cout << " ";
    else
      cout << "*";
  }
   cout << endl;
  }
  }
  return 0;
}
