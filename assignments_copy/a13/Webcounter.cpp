//In this file write the member functions for the Webcounter class
//These member functions taken as a whole are referred to as
//the "class definition"
#include<iostream>
#include<fstream>
#include<string>
#include "Webcounter.h"
using namespace std;

void Webcounter::hit(){
  number_of_visitors++;
}

void Webcounter::reset(){
  number_of_visitors = 0;
}
int Webcounter::get(){
  return number_of_visitors;
}
void Webcounter::set(int new_value){
  if(new_value > 0)
    number_of_visitors = new_value;
  else
    number_of_visitors = 0;
}


void Webcounter::load(string filename){
  string number;
  ifstream infile(filename);
  if(!infile){ //problem opening file
    number_of_visitors = 0;
  } else {
    getline(infile, number);
    number_of_visitors = stoi(number);
    if(number_of_visitors < 0){
      number_of_visitors = 0;
    }
  }
  infile.close();
}
void Webcounter::save(string filename){
  ofstream outfile(filename);
  if(outfile)
    outfile << number_of_visitors << endl;
}

  //file opened fine
  //read in the number from the file and assign it
  //to current_number_of_hits
  //don't forget to close the file
