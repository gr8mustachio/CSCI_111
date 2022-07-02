#include <iostream>
#include "numcols.h"

using namespace std;

int main ()
{
  int how_wide=get_screen_columns();
  int h, w, rw, sw, aw;
  cout << "How tall is the box?" << endl;
  cin >> h;
  cout << "How wide is the box?" << endl;
  cin >> w;
  rw = w * 2;
  sw = how_wide=get_screen_columns();
  aw = sw - rw;
  aw = aw / 2;

  if ( how_wide=get_screen_columns() < rw )
  {
    cout << "Screen too small" << endl;
  }
  else
  {
    for (int i=1; i<=h; i++)
    {
      if (i < 2 || i == h)
      {
        for (int i=0; i < aw; i++)
        {
          cout << " ";
        }
        for (int i=1; i<=rw; i++)
        {
          cout << "*";
        }
        cout << "" << endl;

      }
      else if (i >= 2)
      {
        for ( int i=0; i < aw; i++)
        {
          cout << " ";
        }
        cout << "*";
        for (int i=3; i<=rw; i++)
        {
          cout << " ";
        }
        cout << "*" << endl;
      }
    }
  }
  return 0;
}
