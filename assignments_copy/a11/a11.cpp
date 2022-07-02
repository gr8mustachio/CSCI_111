#include<iostream>
#include<cmath>
using namespace std;

double compute_area_right_triangle(double a, double b){
  return a*b/2;
}
double compute_hypotenuse_right_triangle(double a, double b){
  return sqrt((a*a) + (b*b));
}
void display_right_triangle(double a, double b){
  cout << "Side A: " << a << endl;
  cout << "Side B: " << b << endl;
  cout << "Side C: " << compute_hypotenuse_right_triangle(a,b) << endl;
  cout << "Area: " << compute_area_right_triangle(a,b) << endl;
}

int main(){
  double a;
  double b;
  cout << "What is the length of the short side? ";
  cin >> a;
  cout << "What is the length of the long side? ";
  cin >> b;
  display_right_triangle(a,b);
  return 0;

}
