#include <iostream>

using namespace std;

// Screen is 107 wide

int main()
{
  cout << "How tall is the box? ";
  int boxHeight;
  cin >> boxHeight;
  cout << "How wide is the box? ";
  int boxWidth;
  cin >> boxWidth;
  boxWidth = boxWidth*2;

  if (boxWidth > 107)
  {
    cout << "Screen is too small!" << endl;
    return 0;
  }

  for (int i=0; i<=boxWidth; i++)
  {
    cout << "*";
  }
  cout << endl;

  int emptySpace = boxWidth-2;
  boxHeight = boxHeight-2;

  for (int a=0;a<boxHeight; a++)
  {
    cout << "*";
    for (int c=0;c<=emptySpace; c++)
    {
      cout << " ";
    }
    cout << "*" << endl;
  } 

  for (int i=0; i<=boxWidth; i++)
  {
    cout << "*";
  }
  cout << endl;

  return 0;
}
