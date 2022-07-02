#include<iostream>
#include "numcols.h"
using namespace std;

int main()
{
  int height;
  int width;
  
  cout << "How tall is the box? " << endl;
  cin >> height;
  cout << "How wide is the box? " << endl;
  cin >> width;
  int truewidth = width*2;
  int how_wide=get_screen_columns();
  cout << "Screen width= " << how_wide << endl;
  int center=how_wide/2;
  int where_to_start=center-width/2;
  if (how_wide<width)
  {
    cout << "Screen is too small!" << endl;
  }
  if (how_wide>width)
  {
  for (int aa=0; aa<((how_wide/2)-(width)); aa++)
  {
    cout << " ";
  }
  for (int a=0; a<truewidth; a++)
  {
    cout << "*";
  } 
    cout << endl;
  for (int b=0; b<height-2; b++)
  {
    
    for (int cc=0; cc<((how_wide/2)-(width)); cc++)
    {
      cout << " ";
    }
    for (int c=0; c<1; c++)
    {
      cout << "*";
    } 
    for (int d=0; d<truewidth-2; d++)
    {
      cout << " ";
    }
    cout << "*" << endl;
  }
  for (int ee=0; ee<((how_wide/2)-(width)); ee++)
  {
    cout << " ";
  }
  for(int e=0; e<truewidth; e++)
  {
   cout << "*";
  }
  cout << endl;
  }
  return 0;  
}
    

