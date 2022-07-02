#include<iostream>
#include "numcols.h"

using namespace std; 



int main ()

{
  int screen=get_screen_columns();
  cout << "Screen width=" << screen << endl;

  int how_tall;
  int how_wide;

  cout << "How tall is the box?" << endl;
  cin >> how_tall;

  cout << "How wide is the box?" << endl;
  cin >> how_wide;

  if (screen > how_wide)
  {

    for (int rows = 1; rows <= how_tall; rows++)

    {
      for(int spaces=0; spaces < get_screen_columns()/2 ; spaces++)
        cout << " ";
      for (int columns = 1; columns <= how_wide*2; columns++)

      {

        if(columns>1 && columns < how_wide*2 && rows>1 && rows<how_tall)
          cout << " ";
        else
          cout << "*";

      }

      cout << endl;

    }

  }

    else 

    {
      cout << "Screen too small!" << endl;
    }

    return 0;
  }
