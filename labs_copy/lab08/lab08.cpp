#include<iostream>
using namespace std;

bool compareTo10(); // funcion declaration only needed if function
//definition comes before the main funtion

bool compareTo10(int first, int second){
  return(first + second > 10);
}

int main(){
  int int1;
  int int2;
  cout << "Enter in two integers" << endl;
  cin >> int1;
  cin >> int2;
  if(compareTo10(int1, int2)){
    cout << "The sum is greater than 10" << endl;
  } else {
    cout << "The sum is less than or equal to 10" << endl;
  }
  return 0;
}


