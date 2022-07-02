#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
  unordered_map<char, string> nums;
  nums['0']="zero";
  nums['1']="one";
  nums['2']="two";
  nums['3']="three";
  nums['4']="four";
  nums['5']="five";
  nums['6']="six";
  nums['7']="seven";
  nums['8']="eight";
  nums['9']="nine";
  string input;
  cout << "Type in a number: ";
  cin >> input;
  cout << "You typed in: " << input << endl;
  for(int i=0; i<input.length(); ++i){
    if(nums.count(input[i])==1){
      cout << nums.at(input[i]) << " ";
    } else {
      cout << "NONE ";
    }
  }
  cout << "\n";
  return 0;
}
