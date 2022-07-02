#include<iostream>
#include "numcols.h"

using namespace std;

void center(int left_pad) //adds padding to center the box
{
  for(int i=0; i<left_pad; ++i)
    cout << " ";
}

void print_width(int box_width) //prints top and bottom of box
{
  int disp_width=box_width*2; 
  for (; disp_width >= 1 ; --disp_width )
    cout << "*";
  cout << endl;
}

void print_height(int box_width) //prints middle rows of box
{
  int mid_row=box_width*2-3;
  cout << "*";
  for(; mid_row>=0; --mid_row)
    cout << " ";
  cout << "*\n";
}

int main()
{
  int screen_width=get_screen_columns(); //finds width of terminal
  int box_width;
  int box_height;
  cout << "How wide you want it\n";
  cin >> box_width;
  int left_pad=(screen_width/2) - (box_width); //determines padding needed to center box based on terminal width and user input
  while (left_pad <= 0) //prevents printing a box that will not display properly
  {
    cout << "The screen is too small. What an egregious request.\n";
    return 0;
  }
  cout << "How tall you want it\n";
  cin >> box_height;
  center(left_pad);
  print_width(box_width);
  for(int t=0; t<=(box_height-3); ++t) //determines number of middle rows necessary for desired box height
  {
    center(left_pad);
    print_height(box_width);
  }
  center(left_pad);
  print_width(box_width);

  return 0;
}
