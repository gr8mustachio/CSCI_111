//Liam Smith 
//Project 02 CSCI111
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
  srand ( time(NULL) );
  int pChoice;
  int cChoice;
  int pWin = 0;
  int pLose = 0;
  int pTie = 0;
  int rockCount = 0;
  int paperCount = 0;
  int scissorCount = 0;
  int rockWin = 0;
  int paperWin = 0;
  int scissorWin = 0;
  string pRock = "You chose rock. ";
  string pPaper = "You chose paper. ";
  string pScissors = "You chose scissors. ";
  string cRock = "The computer chose rock. ";
  string cPaper = "The computer chose paper. ";
  string cScissors = "The computer chose scissors. ";
  string win = "You won! ";
  string lose = "You lose! ";
  string yn;
  bool playing = true;

  while(playing){
    cout << "Enter 1 for rock, 2 for paper, 3 for scissors" << endl;
    cin >> pChoice;
    if(pChoice == 1){
      cChoice = rand() % 3 + 1;
      rockCount +=1;
      if(pChoice == cChoice){
        cout << pRock << cRock << "Tie!" << endl;
        pTie +=1;
      } else if(cChoice == 2){
        cout << pRock << cPaper << lose << endl;
        pLose +=1;
      } else if(cChoice == 3){
        cout << pRock << cScissors << win << endl;
        pWin += 1;
        rockWin += 1;
      }
    } else if(pChoice == 2){
      cChoice = rand() % 3 + 1;
      paperCount += 1; 
      if(pChoice == cChoice){
        cout << pPaper << cPaper << "Tie!" << endl;
        pTie +=1;
      } else if(cChoice == 1){
        cout << pPaper << cRock << win << endl;
        pWin += 1;
        paperWin += 1;
      } else if(cChoice == 3){
        cout << pPaper << cScissors << lose << endl;
        pLose += 1;
      } 
    } else if(pChoice == 3){
      cChoice = rand() % 3 + 1;
      scissorCount +=1;
      if(pChoice == cChoice){
        cout << pScissors << cScissors << "Tie!" << endl;
        pTie += 1;
      } else if(cChoice == 1){
        cout << pScissors << cRock << lose << endl;
        pLose +=1;
      } else if(cChoice == 2){
        cout << pScissors << cPaper << win << endl;
        pWin +=1;
        scissorWin +=1;
      }
    } else {
      cout << "error " << endl;
    }
    cout << "Would you like to continue playing? (y/n) " << endl;
    cin >> yn;
   if(yn.compare("y") != 0){
     playing = false;
   }
  } // end of while loop

  if(pWin > pLose){
    cout << "You won the most rounds!" << endl;
  } else if(pWin < pLose){
    cout << "The computer won the most rounds!" << endl;
  } else {
    cout << "You and the computer tied for who had the most wins!" << endl;
  }
  cout << "Wins: " << pWin << " Losses: " << pLose << " Ties: " << pTie
    << endl;
  cout << "You chose rock " << rockCount << " times. You chose paper " <<
    paperCount << " times. You chose scissors " << scissorCount << " times" 
    << endl;
  return 0;
}




