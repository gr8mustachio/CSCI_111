#include<iostream>
#include "numcols.h"

using namespace std;

int main()
{

  int tall;
  int wide;

  cout << "How wide is the box?" << endl;
  cin >> wide;
  
  cout << "How tall is the box?" << endl;
  cin >> tall;

  for(int rows = 1; rows <= tall; rows++)
  {
    for(int columns = 1; columns <= wide; columns++)
    {
     if(columns>1 && columns < wide*2 && rows>1 && rows<tall)
       cout<< " ";
     else
       cout << "*";
    }

    cout << endl;
  }

  return 0;
}
