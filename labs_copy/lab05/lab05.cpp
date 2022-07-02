#include<iostream>
using namespace std;

int main(){
  string str;
  cout << "Let's play Rock, Paper, Scissors" << endl;
  cout << "Enter 1 for rock, 2 for paper, 3 for scissors" << endl;
  cin >> str;
  if(str.compare("1") == 0){
    cout << "You chose rock" << endl;
  } else if(str.compare("2") == 0){
    cout << "You chose paper" << endl;
  } else if(str.compare("3") == 0){
    cout << "You chose scissors" << endl;
  } else {
    cout << str << " is not a valid choice" << endl;
  }
  return 0;
}

