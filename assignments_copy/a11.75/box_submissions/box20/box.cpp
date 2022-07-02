#include<iostream>
#include "numcols.h"
using namespace std;

void draw_box(int height, int width){
  int screen = get_screen_columns();
  screen = (screen/2)-(width/2);
  for (int screenwidth=0; screenwidth < screen; ++screenwidth)
    cout<<" ";
  for (int row=1; row < width; ++row)
    cout<<"*";
  cout<<"\n"; 
  for (int row = 0; row < height-2; ++row)
  {
    for (int screenwidth=0; screenwidth < screen; ++screenwidth)
      cout<<" ";
    cout<<"*";
    for (int col = 1; col < width-2; ++col)
      cout<<" ";
    cout<<"*"<<endl;
  }
  for (int screenwidth=0; screenwidth < screen; ++screenwidth)
    cout<<" ";
  for (int row=1; row < width; ++row)
    cout<<"*";
}
int main(){
  int how_wide=get_screen_columns();
  cout<<"Screen width="<< how_wide <<endl;
  int height;
  int width;
  cout<<"How tall is the box?"<<endl;
  cin>>height;
  cout<<"How wide is the box?"<<endl;
  cin>>width;
  width=2*width;
  draw_box(height,width);
  cout<<"\n";
  return 0;
}
