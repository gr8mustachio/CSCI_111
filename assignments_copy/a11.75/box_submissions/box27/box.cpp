#include "iostream"
#include "numcols.h"

using namespace std;

int how_wide=get_screen_columns();    //Global variable for width of the screen

void height(int wide, int tall)     //Function for the height of the box
{
  int center = how_wide/2-wide/2;

  for (int i=0; i<tall; ++i)      //For-loop to draw out the height
  {
    cout << endl;

    for (int b=0; b<center; ++b)    //For-loop to center the box
      cout << " ";

    cout << "*";

    for (int b=2; b<wide; ++b)     //For-loop to fill in the box with empty space
      cout << " ";

    cout << "*";
  }
  cout << endl;
}

void single_line(int wide)       //Fuction for the width of the box
{
  int center = how_wide/2-wide/2;    

  for (int b=0; b<center; ++b)      //For-loop to center the box
    cout << " ";

  for (int i=0; i<wide; ++i)     //For-loop to draw out the width
    cout << "*";

}
void dimensions()     //Fuction to make the box
{
  int x;    //User input height
  int y;    //User input width

  cout << "How tall is the box?" << endl;
  cin >> x;

  cout << "How wide is the box?" << endl;
  cin >> y;

  int wide=y*2;
  int tall=x-2;

  if (how_wide < wide)      //Checks if screen is wide enough
  {
    cout << "Screen too small!" << endl;
    exit (0);
  }

  single_line(wide);       //Initiates the fuction for the top line of the box
  height (wide,tall);      //Initiates the fuction for the walls (height) of the box
  single_line(wide);       //Initities the fuction for the bottom line of the box
}

int main ()
{
  dimensions ();
  cout <<endl;
  return 0;

}

