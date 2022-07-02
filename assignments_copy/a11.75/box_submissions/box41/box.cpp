// Assigment 11.5: Drawing Boxes


#include<iostream>
#include"numcols.h"

using namespace std;


  // Print Line:
 void printline(int width, int box_width)
{
 
  for (int k=0; k < ((width/2)-(box_width/2)); ++k)
  {
    cout<<" ";
  }
  for(int i=0; i<box_width; ++i)
  {
   cout<<"*";
  }
  cout<<""<<endl;
}

// Printing Columns:
 void printcolumns(int width, int box_width,int box_height)
{
  for(int i=0; i<box_height-2; ++i)
  {
    for (int j=0; j< ((width/2) - (box_width/2)); ++j)
  {
    cout<<" ";
  }
    cout<<"*";
    for(int k=0; k< box_width-2; ++k)
      cout<<" ";
    cout<<"*"<<endl;
  }
}

int main()
{
  int width = get_screen_columns();
  cout<<"Screen width = "<<width<<endl;

  // Width:
  int box_width;
  int h =0;
  while(h!=1)
  {
  cout<<"How wide is the box?"<<endl;
  cin>>box_width;
  if (box_width *2 > width)
  {
    cout<<"Screen too small!"<<endl;
    h=0;
  }
    else
      h=1;
    }
  box_width = box_width * 2;

  // Height:
  cout<<"How tall is the box?"<<endl;
  int box_height;
  cin>>box_height;
 
  printline(width, box_width);
  printcolumns(width, box_width, box_height);
  printline(width, box_width);
    
  return 0;
}


