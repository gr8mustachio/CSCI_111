#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
  string fileName;
  string movieTitle;
  string snack;
  string sYear;
  int year;
  cout << "What is the movie title?" << endl;
  getline(cin, movieTitle);
  cout << "What year was the movie released?" << endl;
  getline(cin, sYear);
  year = stoi(sYear);
  cout << "What is the movie snack?" << endl;
  getline(cin, snack);
  
  cout << "What name should the movie data be written to?" << endl;
  cin >> fileName;
  ofstream outf(fileName);
  outf << movieTitle << endl;
  outf << year << endl;
  outf << snack << endl;
  return 0;
}

