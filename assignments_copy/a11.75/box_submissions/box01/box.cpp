#include<iostream>
#include "numcols.h"
#include<string>

using namespace std;


int center(int how_wide)
{
  for(int a=0; a<how_wide/2; ++a)
  {
    cout << " ";
  }
}

int print_line_stars(int wide, int how_wide)
{
  center(how_wide);
  for(int i=0; i<=wide; ++i)
  {
    cout << "*";
  }

  cout << endl;
}

int print_columns(int tall, int wide, int how_wide)
{
  for(int i=0; i<tall-1; ++i)
  {
    center(how_wide);
    cout << "*";
    for(int x=0; x<wide-1; ++x)
    {
      cout << " ";
    }
    cout << "*\n";
  }

  print_line_stars(wide,how_wide);

}

int main()
{
  int tall;
  int wide;
  cout << "How tall is the box?\n";
  cin >> tall;
  cout << "How wide is the box?\n";
  cin >> wide;
  wide = wide*2;
  int how_wide=get_screen_columns();

  if(wide>how_wide)
  {
    cout << "Screen too small!\n";
    return 0;
  }

  print_line_stars(wide,how_wide);
  print_columns(tall,wide,how_wide);



  return 0;
}
