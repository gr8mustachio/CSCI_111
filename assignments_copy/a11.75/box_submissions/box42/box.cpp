 #include<iostream>
 #include "numcols.h"

 using namespace std;


 int how_wide=get_screen_columns();

 int start = (how_wide/2.5);

void center(int x)
{
for (int i=2; i<x; i++)
{   
  cout<<" ";
}}


void print_height(int x, int y)
{
  for (int i = 2; i < x; i++)
  {   
    center(start);
    cout<<"*";
    center(y);
    cout<<"*\n";
  }
}




void print_width(int i)
{
  center(start);

  for (int x = 1; x < i; x++)
  {
    cout<<"*";
   }
    cout<<"*\n";
}

  void startdraw(int width, int height)
  {
  print_width(width);
  print_height(height,width);
  print_width(width);
  }

int main()
{

  int box_height, box_width;

  cout<<"How tall is the box?\n";
  cin>>box_height;

  cout<<"How wide is the box?\n";
  cin>>box_width;
  box_width = box_width *2;

  
if (box_width >= how_wide)
{
  cout<<"Screen too small!\n";
    return 0; }


  startdraw(box_width, box_height);

  return 0;
}
