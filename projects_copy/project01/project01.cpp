//Liam Smith
//Project 01 CSCI111
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
  srand ( time(NULL) );
  bool found = false;
  int num;
  int guess;
  string diff;
  cout << "Please select difficulty, easy, medium, or hard? " << endl;
  cin >> diff;
  if(diff.compare("easy") == 0){
    num = rand() % 10 + 1;
    for(int i = 1; i <= 3; i++){
      cout << "Guess the computer's number between 1 and 10: " << endl;
      cin >> guess;
      if(guess == num){
        cout << "You, guessed correctly! You win!" << endl;
        found = true;
        break;
      } else if(guess < num){
        cout << "Go higher! " << endl;
      } else if(guess > num){
        cout << "Go lower! " << endl;
      }
    }
    
  } else if(diff.compare("medium") == 0){
    num = rand() % 50 + 1;
    for(int i = 1; i <= 4; i++){
      cout << "Guess the computer's number between 1 and 50: " << endl;
      cin >> guess;
      if(guess == num){
        cout << "You, guessed correctly! You win!" << endl;
        found = true;
        break;
      } else if(guess < num){
        cout << "Go higher! " << endl;
      } else if(guess > num){
        cout << "Go lower! " << endl;
      }
    }

  } else if (diff.compare("hard") == 0){
    num = rand() % 100 + 1;
    for(int i = 1; i <= 5; i++){
      cout << "Guess the computer's number between one and 100: " << endl;
      cin >> guess;
        if(guess == num){
          cout << "You, guessed correctly! You win!" << endl;
          found = true;
          break;
        } else if(guess < num){
          cout << "Go higher! " << endl;
        } else if(guess > num){
          cout << "Go lower! " << endl;
        }
    }
  } else { 
      cout << "Unable to recognize diffficulty. " << endl;
  }
    if(found == false){
      cout << "I'm sorry, that is not correct. You lose." << endl;
    }
    return 0;
} 
