#include<iostream>
#include"numcols.h"
using namespace std;

int height = 0;
int width = 0;
int how_wide = 0;
int margin = 0;


void Width()
{
  int how_wide=get_screen_columns();
  cout << "Screen width=" << how_wide << endl;
}

void Find_Margin()
{
  margin = (how_wide/2) - (width/2);
  //cout << margin << endl;
}

void Draw_Margin()
{
  for(int i=0; i < margin; i++)
    cout << " ";
}

void Draw_Full_Row()
{
  Draw_Margin();
  for(int i=0; i < width; i++)
  {
    cout << "*";
  }
  cout << endl;
}

void Draw_Hollow_Row()
{
  Draw_Margin();
  for(int i=0; i < width; i++)
  {
    if(i == 0 || i == width - 1)
      cout << "*";
    else
      cout << " ";
  }
  cout << endl;
}

void Draw_Box()
{
  for(int i=0; i < height; i++)
  {
    if(i ==0 || i == height - 1)
      Draw_Full_Row();
    else
      Draw_Hollow_Row();
  }
}

int main()
{
  //Width();

  //User Input
  cout << "How tall is the box? ";
  cin >> height;
  cout << "How wide is the box? ";
  cin >> width;
  width = width * 2;
  //cout << height << "\t" << width << endl;
  how_wide = get_screen_columns();
  //cout << how_wide << endl;
  Find_Margin();
  if (width > how_wide)
  {
    cout << "Screen too small!\n";
    return 0;
  }
  Draw_Box();








  return 0;
}
