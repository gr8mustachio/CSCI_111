#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
  //problem1
  bool nonZero = true;
  int num;
  vector<int> nums;
  cout << "Enter several integers." << endl;
  cout << "When you are done, enter the number zero (0).";
  while(nonZero)
  {
    cin >> num;
    if(num !=0){
      nums.pushback<num>;
    } else {
      nonZero = false;
    }
  }
  //problem2
  for(int i=0; i<nums.size(); ++i)
  {
    cout << nums[i] << endl;
  }
  //problem3
  class Coaster{
    public:
      Coaster(string name, int wait, int puke);
      //initialization (problem4)
      Coaster::Coaster(string n, int w, int p)
        : name(n), wait(w), puke(p)
      int get_name();
      int get_wait();
      bool ride_coaster();
      void wuss_factor(int i);
    private: 
      string name;
      int wait; 
      int puke; 
  }
  //problem5
  string Coaster::get_name(){
    return name;
  }
  int Coaster::get_wait(){
    return wait;
  }
  //problem6
  bool Coaster::ride_coaster(){
    Random r(1,100);
    if(r.get <= puke){
      return true;
    } else {
      return false;
    }
  }
  //problem7
  void wuss_factor(int i){
    puke += i;
  }
  //problem8
  vector<Coaster> rides; // already filled with Coaster objects
  int choice;
  for(int i=0; i<rides.size(); ++i){
    cout << "Coaster " << i << ": ";
    cout << rides[i].get_name() << " " << rides[i].get_wait() << endl;
  }
  cout << "Which of these coasters would you like to ride? Enter the Coasters numbers" << endl;
  cin >> choice;
  if(rides[choice].ride_coaster()){
    cout << "You rode " << rides[choice].get_name() << "and lost your lunch" << endl;
  } else{
    cout << "You rode " << rides[choice].get_name() << " and kept your lunch" << endl;
    //problem9
  }
    //1 <<
    //2 \n in between declarations
    //3 -=
    //4 C
    //5 C
    //6 C
    //7 no _
    //8 +- doesn't work
    //9 -+ doesn't work
    //10 C
    //
    //problem10
    int num1 = 10;
    //problem11
    cout << &num1 << endl;
    //problem12
    int* ptrA;
    //problem13
    ptrA = &num1;
    //problem14
    cout << ptrA;
    //problem15
    cout << ptrA;
    //problem16
    int ptrB = ptrA;




  return 0;
}
