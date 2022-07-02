#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
  string filename;
  string movie;
  string snack;
  string year;
  int anniversary;
  cout << "What is the name of the file?" << endl;
  cin >> filename;
  ifstream my_input_file(filename);
  if(my_input_file){
    getline(my_input_file, movie);
    getline(my_input_file, year);
    getline(my_input_file, snack);
    anniversary = stoi(year);
    cout << "Movie title: " << movie << endl;
    cout << "The movie will be 100 years old in "
      << anniversary + 100 << endl;
    cout << "Movie snack: " << snack << endl;
    my_input_file.close();
  }
  return 0;
}
