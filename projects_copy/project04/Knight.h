//Knight class
#ifndef KNIGHT_H
#define KNIGHT_H
#include<string>
#include"Weapon.h"
class Knight { 
  public: 
    Knight(std::string n, Weapon w, int s, bool h);//make sure to 
    //initialize weapon before Knight
    void display();
    bool got_horse();
    bool is_exhausted();
    bool engage();
    void unhorse_yourself();
  private:
    std::string name;
    Weapon wep;
    int stam;
    bool on_horse;
};
#endif
