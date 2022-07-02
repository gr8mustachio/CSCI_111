#include<iostream>
#include"numcols.h"

void drawVerticalSides(int w, int spaces) {
  //subtract 2 to account for sides.
  w-=2;
  while (spaces > 0) {
    std::cout << " ";
    spaces--;
  }
  std::cout << "*";
  while (w > 0) {
    std::cout << " ";
    w--;
  }
  std::cout << "*\n";
}

void drawHorizontalSide(int w, int spaces) {
  while (spaces > 0) {
    std::cout << " ";
    spaces--;
  }
  while (w > 0) {
    std::cout << "*";
    w--;
  }
  std::cout << "\n";
}

//This function could be moved into the main function...
void drawBox(int w, int h, int c) {
  //calculate number of spaces to the left of the box
  int spaces = c-(w/2);

  drawHorizontalSide(w, spaces);

  //subtract 2 to account for top and bottom sides;
  h-=2;
  while (h > 0) {
    drawVerticalSides(w, spaces);
    h--;
  }

  drawHorizontalSide(w, spaces);
}


int main() {
  int h, w, c; //heighth, width, center

  std::cout << "How tall is the box? ";
  std::cin >> h;

  std::cout << "How wide is the box? ";
  std::cin >> w;
  w*=2;

  c = get_screen_columns() / 2;
  
  //Don't really need this as a seperate function...
  drawBox(w, h, c);
  
  return 0;
}
