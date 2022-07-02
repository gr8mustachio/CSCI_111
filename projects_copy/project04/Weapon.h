#include<string>
#ifndef WEAPON_H
#define WEAPON_H
class Weapon{
  public:
    Weapon(std::string t, int p, int s); 
    void display();
    int what_is_stamina_cost();
    bool did_I_hit();
    std::string getName();
  private:
    std::string type;
    int prob;
    int stam;
};
#endif
