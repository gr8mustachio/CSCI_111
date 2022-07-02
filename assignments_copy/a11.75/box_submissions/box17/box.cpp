#include<iostream>
#include "numcols.h"
using namespace std;
int main()
{
  int how_tall;
  int how_wide;
  cout << "How tall is the box? ";
  cin >> how_tall;
  cout  << "How wide is the box? ";
  cin >> how_wide;
  int screen=get_screen_columns();
  if(screen<how_wide*2)
    cout << "The screen is too small." << endl;
  else
  {
  for(int w=0; w < how_tall; w++)
  {
    for(int x=0; x < screen/2 -how_wide; x++)
cout << ' ';
  for(int y=0; y < how_wide*2; y++)
  {
   if(y==0 || y==how_wide*2-1 || w==0 || w==how_tall-1)
     cout << '*';
   else
     cout << ' ';
  }
  cout << endl;
  }
  }
  return 0;
}
