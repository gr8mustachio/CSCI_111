#include"Weapon.h"
#include"Random.h"
#include<iostream>
using namespace std;

Weapon::Weapon(string t, int p, int s)
  : type(t), prob(p), stam(s)
{
}

void Weapon::display(){
  cout << type << " that costs " << stam << " stamina and has a " << 
    prob << "%" << " chance to hit." << endl;
}

bool Weapon::did_I_hit(){
  Random rand(0,100);
  if(prob >= rand.get())
    return true;
  return false;
}

int Weapon::what_is_stamina_cost(){
  return stam;
}

string Weapon::getName(){
  return type;
}
