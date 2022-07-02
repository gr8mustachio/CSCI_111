#include<iostream>
#include"Weapon.h"
#include"Knight.h"

using namespace std;

int main()
{
  string wN1, wN2, kN1, kN2;
  int w1Chance, w2Chance, w1Stam, w2Stam, k1Stam, k2Stam;
  //user_input.txt inputs FOR WEAPONS
  cout << "Enter the first weapon's type: " << endl;
  getline(cin, wN1);
  cout << "Enter the first weapon's hit chance: " << endl;
  cin >> w1Chance;
  cout << "Enter the first weapon's stamina cost: " << endl;
  cin >> w1Stam;
  cout << "Enter the second weapon's type: " << endl;
  cin.ignore();
  getline(cin, wN2);
  cout << "Enter the second weapon's hit chance: " << endl;
  cin >> w2Chance;
  cout << "Enter the second weapon's stamina cost: " << endl;
  cin >> w2Stam;
  //user_input.txt inputs FOR KNIGHTS 
  cout << "Enter the first Knight's name: " << endl;;
  cin.ignore();
  getline(cin, kN1);
  cout << "Enter the first Knight's stamina: " << endl;
  cin >> k1Stam;
  cout << "Enter the second Knight's name: " << endl;
  cin.ignore();
  getline(cin, kN2);
  cout << "Enter the second Knight's stamina: " << endl;
  cin >> k2Stam;
  //END OF USER INPUT
  int roundNum = 1;
  bool jousting = true;
  bool p1Win = true;
  bool p2Win = true;
  //Weapon declarations
  Weapon w1(wN1, w1Chance, w1Stam);
  Weapon w2(wN2, w2Chance, w2Stam);
  //Knight declarations
  Knight k1(kN1, w1, k1Stam, true);
  Knight k2(kN2, w2, k2Stam, true);
  while(jousting)
  {
    if(k1.got_horse() && k1.is_exhausted() == false){
      p1Win = k1.engage();
    }
    if(k2.got_horse() && k2.is_exhausted() == false){
      p2Win = k2.engage();
    }
    if(k1.is_exhausted() || k2.is_exhausted()){
      k1.display();
      k2.display();
      jousting = false;
      break;
    }
    
    roundNum++;
    if(p1Win || p2Win){
      if(p1Win && p2Win){
        k1.unhorse_yourself(); 
        k2.unhorse_yourself();
        k1.display();
        k2.display();
        jousting = false;
        break;
      }
      if(p1Win && !p2Win){
        k2.unhorse_yourself();
        k1.display();
        k2.display();
        jousting = false;
        break;
      }
      if(p2Win && !p1Win){
        k1.unhorse_yourself();
        k1.display();
        k2.display();
        jousting = false;
        break;
      }
    }
    if(!p1Win && !p2Win){
      k1.display();
      k2.display();
    }
    
  }
  return 0;
}

