#include<iostream>
#include "numcols.h"

using namespace std;
/*
int get_screen_columns()
{
  struct winsize w;
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
  return w.ws_col;
}
*/
int main()
{
  int how_tall;
  int how_wide;
  int screenwidth=get_screen_columns();
  cout <<"Screen width=" << screenwidth << endl;

  cout << "How wide is the box" << endl;
  cin >> how_wide;
  
  cout << "How tall is the box" << endl;
  cin >> how_tall;

  for (int rows = 1; rows <= how_tall; ++rows)
  {
    for(int spaces=1; spaces < (screenwidth - how_wide)/2; spaces++)
      cout << " ";
    for (int columns = 1; columns <= how_wide*2; columns++)
    {
      if(columns>1 && columns < how_wide*2 && rows>1 && rows<how_tall)
        cout << " ";
      else
        cout << "*";
    }
    cout << endl;
  }
  return 0;
}
