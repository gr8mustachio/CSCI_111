#include<iostream>
#include "numcols.h"

using namespace std;

//width=101

int main()
{
  int screen_cols=get_screen_columns();
  int wide;
  int height;
  cout << "How wide is the box?\n";
  cin >> wide;
  cout << "How tall is the box?\n";
  cin >> height;
  if (wide>=101)
  {
    cout << "Screen too small!\n";
    return 0;
  }
  for (int row = 1; row <= height; row++)
 {
   //loop and print out spaces to center the row
// screen collumn divided by 2 - width of box
 for (int indent=0; indent < screen_cols/2-wide; indent++)
 {
   cout << " ";
 }
    for (int col = 1; col <= wide*2; col++)
    {
      if(col>1 && col < wide*2 && row >1 && row < height)
        cout << " ";
      else
        cout << "*";
    }

    cout << endl;
  }
  return 0;
}


