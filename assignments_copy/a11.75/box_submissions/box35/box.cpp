//File a11.5.cpp
//To compile: g++ -std=c++17 a11.5.cpp numcols.cpp 
 #include<iostream>
 #include "numcols.h"

 using namespace std;
void spaces(int cols){
  for(int spaces = 0; spaces < (get_screen_columns()/2)-cols/2; spaces++){
  cout << " ";
  }
}
 int get_cols( ){
   int cols;
   cout << "Width of box: ";
   cin >> cols;
   return cols * 2;
 }
int get_rows( ){
  int rows;
  cout << "Length of box: ";
  cin >> rows;
  return rows;
}
void draw_cols(int cols){
  string column[cols];
  spaces(cols);
  for(int i = 0; i < cols; i++){
    column[i] = "*";
    cout << column[i];
  }
  cout << "\n";
}
void draw_rows(int row, int cols){
  string rows[row * 2];
  int rowLen = row*2;
  rows[0] = "*";
  rows[rowLen - 1] = "*";
  for(int i = 1; i <= rowLen - 2; i++){
    rows[i] = " ";
  }
  spaces(cols);
  for(int i = 0; i < rowLen; i++){
    cout << rows[i];
  }
  cout << "\n";
}
  

 int main()
 {
   int how_wide=get_screen_columns();
   cout << "Screen width=" << how_wide << endl;
   int cols = get_cols();
   int rows = get_rows();
   if(cols > how_wide){
     cout << "Screen too small!" << endl;
     return 0;
   }
   draw_cols(cols);
   for(int i = 1; i < rows - 1; i++){
     draw_rows(rows, cols);
   }
   draw_cols(cols);
   return 0;
 }
