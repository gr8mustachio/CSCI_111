#include<iostream>
using namespace std;

void sortie(int& first, int& second, int& third)
{
  int temp = 0;
  for(int i=0; i<3;++i){
    if(first > second)
    {
      temp = first;
      first = second;
      second = temp;
    } else if(first > third)
    {
      temp = first;
      first = third;
      third = temp;
    } else if(second > third)
    {
      temp = second;
      second = third;
      third = temp;
    } 
  }
  return;
}


int main()
{
  cout << "Enter three numbers ";
  int first, second, third;
  cin >> first >> second >> third;
  cout << endl;
  cout << "Unsorted: " << first << ", " << second << ", " << third << endl;
  sortie(first, second, third);
  cout << "Sorted:   " << first << ", " << second << ", " << third << endl;
  return 0;
}
