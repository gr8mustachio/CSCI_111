#include <iostream>
#include "numcols.h"
using namespace std;

int main(){
  int height, width;
  cout << "How tall is the box? ";
  cin >> height;
  cout << "How wide is the box? ";
  cin >> width;

  if (get_screen_columns() > width*2){
    for (int j = 0; j < height; j++){
      for ( int k = 0; k < get_screen_columns()/2.0-width/2.0; k++){
        cout << " ";
      }
      if (j == 0 || j+1 == height){
        for(int i = 0; i < width; i++){
          cout << "**";
        } 
      } else {
        for(int i = 0; i < width*2; i++){
          if (i == 0 || i+1 == width*2){
            cout << "*";
          } else cout << " ";
        } 
      }
      cout << endl;
    }
    
  } else {
    cout << "Screen too small!" << endl;
  }

  return 0;
}