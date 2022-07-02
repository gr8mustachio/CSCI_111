#include<iostream>
#include "numcols.h"
#include <sys/ioctl.h>
#include <unistd.h>

using namespace std;
//width 84

int main()
{
  int height;
  cout<< "How tall is the box?" << endl;
  cin >> height;

  int wide;
  cout<< "How wide is the box?" << endl;
  cin >> wide;
  
  for (int row=1; row<= height; row++)
  {  
    for(int spaces=0; spaces <get_screen_columns()/2; spaces++)
      cout << " ";

  {
    for (int col=1; col<= wide*2; col++)
    {
      if (col>1 && col <wide*2 && row>1 && row<height)
        cout<< " ";
      else
        cout<< "*";
    }
    cout << endl;
  }
  }
  return 0;
}

