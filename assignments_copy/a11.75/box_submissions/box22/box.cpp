#include <iostream>
#include "numcols.h"


using namespace std;

int main()
{

  int tall, wide;
  int how_wide = get_screen_columns();
  cout << "Screen width=" << how_wide << endl;

  cout << "How tall is the box? ";
  cin >> tall;

  cout <<"How wide is the box? ";
  cin >> wide;

  int i,m,n;
  if ( wide > how_wide)
  {    cout << "Screen is too small!"<<endl;
    return 0;
  }
  else 
  {
    // get the length of the string that we input (********)
    // insert blank to put the box in the center

    float startPoint= how_wide/2 - wide /2;
    // first line of the box 
    for ( i = 0; i < startPoint; i++)
      cout << " "; 

    for ( i=0 ; i < wide+1; i++)
      cout <<"*";

    cout << endl;

    // second - (final -1 ) line of the box 
    for (i = 0; i < (tall - 3); i++)
    {
      for ( n=0; n < startPoint; n++)
        cout << " ";

      cout << "*";

      for (m = 0; m != (wide-1); m ++)
        cout << " ";

      cout << "*" <<endl;
    } 

    // last line of the box 

    for (i=0; i< startPoint; i++)
      cout << " ";


    for (i=0; i< wide+1 ; i++)
      cout <<"*";
    cout << endl;


    return 0;
  }
}


