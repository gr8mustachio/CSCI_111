#include<iostream>
#include<string>

using namespace std;

int main()
{
  string input;
  string message;
  cout << "Enter your message: ";
  getline(cin, input);
  for(int i=0; i<input.length()+4; ++i)
    message += "-";
  message += "\n| ";
  message += input;
  message += " |\n";
  for(int i=0; i<input.length()+4; ++i)
    message += "-";
  cout << message;
  return 0;
}
  
  
