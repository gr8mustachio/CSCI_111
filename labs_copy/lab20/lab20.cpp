#include<iostream>
#include<string>

using namespace std;

int main()
{
  int mult;
  int add;
  string phrase;
  cout << "What is your multiplier?" << endl;
  cin >> mult;
  cout << "What is your adder?" << endl;
  cin >> add;
  cout << "Enter a phrase to encrypt" << endl;
  cin.ignore();
  getline(cin, phrase);
  int nums [phrase.length()];
  //encryption begins
  for(int i=0; i<phrase.length(); ++i)
  {
    nums[i] = int(phrase[i] * mult) + add;
  }
  cout << "Encrypted: " << endl;
  for(int i=0; i<phrase.length(); ++i)
  {
    cout << nums[i] << " ";
  }
  cout << endl; 
  return 0;
}
    

