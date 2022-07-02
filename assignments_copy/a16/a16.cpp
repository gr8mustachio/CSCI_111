#include<iostream>

using namespace std;

int main()
{
  //prob 2
  int x;
  cout << "Enter a number:" << endl;
  cin >> x;
  if(x<5)
    cout << "small fry" << endl;
  cout << "Smarty pants!" << endl;
  
  //prob 3
  cout << "Enter a number" << endl;
  cin << x;
  if(!(x > 0 && x < 101))
    cout << "Outlier" << endl;

  //prob4
  //a
  (a = b = c) = 5;
  //b
  (b+c) << (d&&e) << f;
  //c
  (+a) -b;
  //d
  !a - (-b);
  //e
  a -> (b+c);

  //prob5
  //a
  //output is 0;
  //b 
  //output is 3; 
  //c
  //output is '3%4'
  //d
  //output is 'x%y'

  //prob6
  //Preprocessing, compilation, assembly, linking
  
  //prob7
  for(int i=10; i>2; i-2)
    cout << i << endl;

  //prob 8
  //a
  //no
  //b
  //no
  //c
  //yes
  //d
  //no
  //e
  //no
  //f
  //yes
  //g
  //yes

  //prob9
  string name;
  cout << "What is your name? ";
  cin >> name;
  cout << "\n" << "Hi " << name << ". I like your name" << endl;

  //prob10
  float maxof3(float f1, float f2, float f3){
    int max;
    if(f1 > f2){
      max = f1;
    } else {
      max = f2;
    }
    if(f1 > f3){
      max = f1;
    } else {
      max = f3;
    }
    if(f2 > f3){
      max = f2;
    } else {
      max  = f3;
    } 
    return max;
  }
  return 0;
}

