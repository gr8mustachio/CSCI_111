#include<iostream>
#include "numcols.h"

using namespace std;

void width(int col, int wdt)
{
  for(int i=0; i<60-wdt; ++i)
  {
    cout << " ";
  }
  for(int i=0; i<col; ++i)
  {
    cout << "*";
  }
  cout << endl;
}

void height(int col, int hgt, int wdt)
{
  for(int i=0; i<hgt-2; ++i)
  {
    
    for(int i=0; i<60-wdt; ++i)
    {
      cout << " ";
    }
    cout << "*";
    for(int t=0; t<col-2; ++t)
    {
      cout << " ";
    }
    cout << "*" << endl;
  }
}

int main()
{
  int hgt;
  int wdt;
  int col;
  cout << "How tall is the box? ";
  cin >> hgt;
  cout << "How wide is the box? ";
  cin >> wdt;
  col=wdt*2;
  int how_wide=get_screen_columns();
  cout << "Screen width=" << how_wide << endl;
  if(col>how_wide)
  {
    cout << "Screen to small" << endl;
  }
  else
  {
  width(col, wdt);
  height(col,hgt,wdt);
  width(col,wdt);
  }


  return 0;
}
