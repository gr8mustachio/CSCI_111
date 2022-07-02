#include <iostream>
#include "numcols.h"

using namespace std;

int main()
{
  int how_wide=get_screen_columns();
  int wide;
  int tall;

  cout << "How wide is the box?" << endl;
  cin >> wide;
  cout << "How tall is the box?" << endl;
  cin >> tall;

  if(wide>how_wide)
    cout << "Screen too small" << endl;
  else
  {
    for(int row = 1; row <= tall; row++)
    {
      for(int indent = 0; indent < how_wide/2-wide; indent++)
      {
        cout << " ";
      }
      for(int col = 1; col <= wide*2; col++)
      {
        if(col>1 && col<wide*2 && row>1 && row < tall)
          cout << " ";
        else
          cout << "*";
      }
      cout << endl;
    }
  }
  return 0;
}
