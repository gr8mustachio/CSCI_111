#include<iostream>
#include "numcols.h"

using namespace std;

//function prototypes
void indent();
void solidRow();
void hollowRow();

//variable declaration
int screenWidth; 
int inputWidth;
int inputHeight;
int leftMargin;

int main(){

  do {

    //in case someone resizes the window
    screenWidth = get_screen_columns();

    //input
    cout << "How tall is the box?\n";
    cin >> inputHeight;
    cout << "How wide is the box?\n";
    cin >> inputWidth;

    //get important numbers for later
    inputWidth *= 2;
    leftMargin = (screenWidth - inputWidth)/2; 

    //only print the box if the screen is big enough
    if(inputWidth>screenWidth){
      cout << "Screen too small!\n";
      return 0;
    }

    //print the top side of the box
    solidRow();

    //print the left and right sides of the box
    for(int i = 0; i<(inputHeight-2); i++){
      hollowRow();
    }

    solidRow();

  } while (true);

}

//function to make left margin
void indent(){
  for(int i=0; i<leftMargin; i++){
    cout << ' ';
  }
}

//function to make top or bottom row
void solidRow(){
  indent();
  for(int i=0; i<inputWidth; i++){
    cout << '*';
  }
  cout << endl;
}

//function to make a row other than top or bottom
void hollowRow(){
  indent();
  cout << '*';
  for(int i = 0; i<(inputWidth-2); i++){
    cout << ' ';
  }
  cout << "*\n";
}
