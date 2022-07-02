#include<iostream>
#include "numcols.h"
#include<iomanip>

using namespace std;

int main()
{
  int how_wide=get_screen_columns();
  int height;
  int width;
  int indent;
  int realwidth;
  int horizontalwidth;

  cout<<"How tall is the box?"<<endl;
  cin>> height;
  cout<<"How wide is the box?"<<endl;
  cin>> width;

  indent=how_wide/2 -width;
  realwidth=width*2;

  if(width>how_wide){
    cout<<"Screen too small!"<<endl;
    return 0;
  }

  cout<<setw(indent);
  int i;
  for(i=0; i<realwidth; i++)
  cout<<'*';

  horizontalwidth=realwidth-1;
  int x=0;
  while(x<height-2)
  {
  cout<<"\n" <<setw(indent)<<'*'<<setw(horizontalwidth)<<'*';
  x++;
  }

   cout<<endl<<setw(indent);
  int y;
  for(y=0; y<realwidth; y++)
  cout<<'*';
  
  cout<<endl;

  return 0;
}
