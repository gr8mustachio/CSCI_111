#include<iostream>
#include "numcols.h"
using namespace std;

void center(int width, int how_wide)
{
  for(int i=0; i<(how_wide-width*2)/2; ++i)
    cout << " ";
}
void print_top_bottom(int width, int how_wide)
{
  center(width, how_wide);
  for(int i=0; i<width*2; ++i)
    cout << "*";
  cout << endl;
}
void middle_rows(int width, int how_wide)
{
  center(width, how_wide);
  cout << "*";
  for(int i=0; i<width*2-2; ++i)
    cout << " ";
  cout << "*" << endl;
}

int main()
{
  int how_wide=get_screen_columns();
  cout << "Screen width=" << how_wide << endl;
  int height;
  int width;
  cout << "How tall is the box? ";
  cin >> height;
  cout << "How wide is the box? ";
  cin >> width;
  if(width>how_wide/2)
  {
    cout << "Screen too small!\n";
    return 0;
  }
  print_top_bottom(width, how_wide);
  for(int i=0; i<height-2; ++i)
    middle_rows(width, how_wide);
  print_top_bottom(width, how_wide);

  return 0;
}
