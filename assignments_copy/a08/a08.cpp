#include<iostream>
using namespace std;

int main(){
  int hi;
  int countdown = 10;
  int counter;
  bool isBarney = false;
  string barney;
  cout << "How many times do you want the computer to print out 'Hi'?"
    << endl;
  cin >> hi;
  //Hi for loop
  for(int i = 0; i < hi; i++){
    cout << "Hi" << endl;
  }
  //Hi do while loop
  counter = hi;
  do{
    cout << "Hi"  << endl;
    counter --;
  }
  while(counter !=0);
  //Hi while loop
  counter = hi;
  while(counter > 0){
    cout << "Hi" << endl;
    counter--;
  }
  
  //Countdown for loop
  for(int i = 10; i > 0; i--){
    cout << i << endl;
  }
  cout << "Liftoff!";
  //Countdown do while loop
  do{
    cout << countdown << endl;
    countdown--;
  } 
  while(countdown != 0);
  cout << "Liftoff"<< endl;
  //Countdown while loop
  countdown = 10;
  while(countdown > 10){
    cout << countdownm << endl;
    countdown--;
  }
  cout << "Liftoff" << endl;
 //Barney for loop 
  while(!isBarney){
    cout << "What's my name?" << endl;
    cin >> barney;
    if(barney.compare("Barney") == 0){
        isBarney = true;
    }
  }
}
