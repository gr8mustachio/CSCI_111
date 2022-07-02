#include<iostream>
#include "numcols.h"
using namespace std;

int main()
{

  int wide=0;
  int tall=0;

  cout << "How tall is the box?" << endl;
  cin >> tall;
  cout << "How wide is the box?" << endl;
  cin>> wide ; 
  wide=wide*2;

  int how_wide=get_screen_columns();
  //cout << "Screen width=" << how_wide << endl;

  if ( wide > how_wide )
  { 
    cout <<  "Screen too small!" << endl;
  }
  else
  {
  
    
  for (int a=0; a<tall; a++)
  {
    for(int c=0; c<( how_wide/2 - wide/2); c++)
    {
     cout << " ";
    }

    for (int b=0; b<wide; b++)
    {
      if (b==0 ||b==wide-1 || a==0 || a==tall-1)
        cout<< "x";
      else
        cout << " ";
    }
    cout << endl;
  }
  }
  return 0;
}
