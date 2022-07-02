#include<iostream>
using namespace std;

int main(){
  string str;
  bool playing;
  cout << "Let's play Rock, Paper, Scissors" << endl;
  playing = true;
  while(playing){
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
    cout << "Would you like to play again (Y for yes, N for no)?" << endl;
    cin >> str;
    if(str.compare("Y") != 0){
      playing = false;
    }
  }
 return 0;
}

