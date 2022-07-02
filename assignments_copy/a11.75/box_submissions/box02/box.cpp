#include<iostream>
#include"numcols.h"
using namespace std;

void draw_rectangle(int tall, int wide)
{
  int rows, cols, space, how_wide=get_screen_columns();
  char star = '*';

  if(how_wide >= wide)
    for(rows = 1; rows <= tall; rows++)
    {
      for(space = 1; space < get_screen_columns()/2-wide; space++)
        cout << " ";
      for(cols = 1; cols <= wide*2; cols++)
      {
        if(cols > 1 && cols < wide*2 && rows > 1 && rows < tall)
          cout << " ";
        else 
          cout << star;
      }
      cout << endl;
    }
  else
    cout << "Screen too small!" << endl;
}


int main()
{
  int tall, wide;

  cout << "How tall is the box? ";
  cin >> tall;

  cout << "How wide is the box? ";
  cin >> wide;

  draw_rectangle(tall, wide);

  return 0;
}
