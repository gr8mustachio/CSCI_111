#include<iostream>
#include "numcols.h"

using namespace std;

int main()
{
  cout << "How tall is the box?" << endl;

  int height;
  cin >> height;



  cout << "How wide is the box?" << endl;

  int width;
  cin >> width;


  int how_wide=get_screen_columns();
  cout << "Screen width=" << how_wide << endl;
  if(width>how_wide)
    cout << "Screen too small!" << endl;
  else 

for(int center=0;center<60;center++)
  cout << " ";
  { 


    for(int row = 1 ; row <= height; row++){

      for(int spaces=0; spaces < get_screen_columns()/2; spaces++)
        cout << " ";

      for(int col = 1 ; col <= width*2; col++){

        if (row > 1 && row < height && col > 1 && col < width*2 ){
          cout << " ";
        }else{
          cout << "*";
        }
      }
      cout << endl;  
    }
  }
  

  return 0;
}
