#include"Knight.h"
#include"Weapon.h"
#include<iostream>
using namespace std;

Knight::Knight(string n, Weapon w, int s, bool h)
  : name(n), wep(w), stam(s), on_horse(h)
{
}

void Knight::display(){
  cout << "\n";
  cout << "Knight: " << name << ". Stamina: " << stam << ". On horse: " <<
    on_horse << ". Weapon: ";
  wep.display();
}

bool Knight::got_horse(){
  if(on_horse)
    return true;
  return false;
}

bool Knight::is_exhausted(){
  if(stam <= 0){
    cout << "\n";
    cout << name << " has collapsed from exhaustion!" << endl;
    return true;
  }
  return false;
}

bool Knight::engage(){
  cout << "\n" <<  name << " is charging with his " << wep.getName() << "!" << endl;
  int stam_cost = wep.what_is_stamina_cost();
  stam -= stam_cost;
  bool hit = wep.did_I_hit();
  if(hit){
    return true;
  } else {
    return false;
  }
}

void Knight::unhorse_yourself(){
  cout << name << " has been hit off his horse!" << endl;
  on_horse = false;
}


