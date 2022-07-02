#include<iostream>
#include "braille_to_letter.h"

using namespace std;

int main()
{
  cout << "Please enter a braille character.\n"
    << "A period '.' represents a space, and\n"
    << "An asterisk '*' represents a pip.\n"
    << "For example, for the letter 'U' enter:\n"
    << "*.\n"
    << "..\n"
    << "**\n\n";

  char braille[6];
  for(int i=0; i<6; ++i)
    cin >> braille[i];

  cout << "Your letter is: " << braille_to_letter(braille) << endl;

  return 0;
}
