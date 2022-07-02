#include <iostream>
#include "numcols.h"
using namespace std;

int main()
{
  int how_tall;
  cout << "How tall is the box? ";
  cin >> how_tall;
  int how_wide; 
  cout << "How wide is the box? ";
  cin >> how_wide;
  int screen_width=get_screen_columns();

  if(screen_width<how_wide*2)
    cout << "Screen too small!" << endl;
  else
  {

    for(int y=0; y<how_tall; y++)
    {
     
      for(int w=0; w < screen_width/2 - how_wide; ++w)
        cout << ' ';
      for(int x=0; x<how_wide*2; ++x)
      {
        if(x==0 || x==how_wide*2-1 || y==0 || y==how_tall-1)
          cout << '*';
        else
          cout << ' ';
      }
      cout << endl; 
    }
  }

  return 0;
}
