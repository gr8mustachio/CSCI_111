#include<iostream>
#include "numcols.h"
using namespace std;

void DrawBox(int h, int w){
  int screen=get_screen_columns();
  screen=(screen/2)-(w/2);
  for(int i=0; i<screen; ++i)
    cout << " ";
  for(int i=0; i<w; ++i)
    cout << "*";
  cout << "\n";
  for(int i=0; i<h-2; ++i){
    for(int j=0; j<screen; ++j)
      cout << " ";
    cout << "*";
    for(int j=0; j<w-2; ++j)
      cout << " ";
    cout << "*" << endl;}
  for(int i=0; i<screen; ++i) 
    cout << " "; 
  for(int i=0; i<w; ++i)
    cout << "*";
  cout << "\n";}

int main(){
  int height;
  int width;
  cout << "How tall is the box? ";
  cin >> height;
  cout << "How wide is the box? ";
  cin >> width;
  width = 2*width;
  int Swidth = get_screen_columns();
  if (Swidth < width)
    cout << "Screen too small!" << endl;
  else
    DrawBox(height, width);
  return 0;}
