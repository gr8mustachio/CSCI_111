// draw_hexes.cpp

#include"hexagon.h"

void hex(){
  for(inti=0; i<6; i++){
    moveForeward();
    turnRightBy(60);
  }
}
void move_down_to_next_position(){
  for(int i=0; i<4; ++i){
    moveForward();
    turnRightBy(60);
  }
  turnRightBy(120);
}

int main()
{
  for(int i=0; i<6; ++i)
  {
    moveForward();
    turnRightBy(60);
  }
  return 0;
}
