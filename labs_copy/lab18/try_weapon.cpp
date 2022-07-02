#include<iostream>
#include "Weapon.h"
//let's confirm that header guards were used:
#include "Weapon.h"

using namespace std;

int main()
{
  string type;
  int hp;
  int sd;

  cout << "What kind of weapon is it?" <<endl;
  getline(cin,type);
  cout << "What is the hit probability of the weapon?" <<endl;
  cin >> hp;
  cout << "How much stamina does the weapon cost with each use?" <<endl;
  cin >> sd;

  Weapon w(type, hp, sd);
  cout << "The weapon costs " << w.what_is_stamina_cost() << " stamina with each use." << endl;
  cout << "The weapon is: ";
  w.display();

  Weapon no_chance(type,0,50); //all attempts to hit should fail
  for(int i=0; i<10; ++i)
  {
    bool attempt=no_chance.did_I_hit();
    cout << attempt << " ";
  }
  cout << endl;

  Weapon sure_thing(type,100,50); //all attempts to hit should succeed
  for(int i=0; i<10; ++i)
  {
    bool attempt=sure_thing.did_I_hit();
    cout << attempt << " ";
  }
  cout << endl;

  return 0;
}
