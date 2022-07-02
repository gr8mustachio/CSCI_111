#include<iostream>
#include "numcols.h"
using namespace std;

void how_wide(int width)
{
  for(int x=0; x<width*2; ++x)
  {
    cout << "*";
  }
  cout << endl;
}
void how_wide_space(int width)
{
  cout << "*";
  for(int x=0; x<(width-1)*2; ++x)
  {
    cout << " ";
  }
  cout << "*" << endl;
}
void how_high(int height, int width)
{
  for(int x=0; x<height - 2; ++x)
  {
    how_wide_space(width);
  }
}
void center_TB(int wideness, int width, int height)
{
  for(int x=0; x<(wideness/2 - width); x++)
  {
    cout << " ";
  }
  how_wide(width);
}
void center_M(int wideness, int width, int height)
{
  for(int x=0; x<(wideness/2 - width); x++)
  {
    cout << " ";
  }
  how_wide_space(width);
}
void center_C(int wideness, int width, int height)
{
  for(int x=0; x<height - 2; ++x)
  {
    center_M(wideness, width, height);
  }
}
int main()
{
  int wideness = get_screen_columns();
  int height, width;
  int col = width;
  cout << "Screen width=" << wideness << endl;
  cout << "How tall is the box? ";
  cin >> height;
  cout << "How wide is the box? ";
  cin >> width;
  if(width > wideness)
  {
    cout << "Screen too small" << endl;
  }
  if(width <= wideness)
  {
    center_TB(wideness, width, height);
    center_C(wideness, width, height);
    center_TB(wideness, width, height);
  }
  return 0;
}
