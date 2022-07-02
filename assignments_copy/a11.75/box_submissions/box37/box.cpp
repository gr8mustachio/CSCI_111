#include<iostream>
#include"numcols.h"
using namespace std;

void print_box(int height, int width)
{
  int how_wide = get_screen_columns();
  int middle = (how_wide/2)-(width-2);
  if(how_wide<width)
    cout<<"Screen too small"<<endl;
  else{
    for(int i=0;i<middle;i++)
    {
      cout<<" ";
    }
    for(int i=0; i<width; i++)
    {
      cout<<"*";
    }
    cout<<"\n";

    for(int i=0;i<height; i++)
    {
      for(int i=0;i<middle;i++)
      {
        cout<<" ";
      }
      cout<<"*";
      for(int j=0; j<(width-2);j++)
      {
        cout<<" ";

      }
      cout<<"*"<<endl;
    }
    for(int i=0;i<middle;i++)
    {
      cout<<" ";
    }
    for(int i=0; i<width; i++)
    {
      cout<<"*";
    }
    cout<<"\n";
  }
}
int main()
{
  int width, height;
  cout<<"How tall is the box?"<<endl;
  cin>> height;
  cout<<"How wide is the box?"<<endl;
  cin>>width;
  width = width*2;
  print_box(height, width);
}
