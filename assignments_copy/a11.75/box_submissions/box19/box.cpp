#include<iostream>
#include<string>
#include "numcols.h"
using namespace std;

int main(){
  int x,y =0;
  bool go = true;
  cout << "Enter box width" << endl;
  cin >> x;
  cout << "Enter box height" << endl;
  cin >> y;
  int max = get_screen_columns();
  if(max == x*2){
    cout << "Screen too small!" << endl;
    go = false;
  }
  //construct box
  if(go){
    int half = max/2;
    string space;
    //center the box everytime
    int buff = x;
    x = x*2;
    //centerer which creates the center space
    for (int i = buff;i<half; i++){
      space += " ";
    }
    string col;
    for(int i =0;i<x;i++){
      col+="*";
    }
    cout << space << col << endl;
    y = y-2;
    string row;
    for(int i = 0;i<y;i++){
        row = "*";  
        for(int p=2;p<x;p++){
          row+=" ";
        }
        row+="*";
        cout << space << row << endl;
     }
    cout << space << col << endl;
}
  return 0;
}
