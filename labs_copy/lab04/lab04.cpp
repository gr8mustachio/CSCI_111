#include<iostream>
using namespace std;

int main(){
  string dir;
  string color;
  string colorPrompt = "What color is the light (red, green)?";
  cout << "What direction are you driving (right, left, straight)?" << endl;
  cin >> dir;
  if(dir.compare("left") == 0 || dir.compare("straight") == 0){
    cout << colorPrompt << endl;
    cin >> color;
    if(color.compare("red") == 0){
      cout << "Stop." << endl;
    } else if(color.compare("green") == 0){
      cout << "Go." << endl;
    } else {
      cout << "error" << endl;
    }
  } else if(dir.compare("right") == 0){
    cout << colorPrompt << endl;
    cin >> color;
    if(color.compare("red") == 0){
      cout << "Go after stop." << endl;
    } else if(color.compare("green") == 0){
      cout << "Go." << endl;
    } else {
      cout << "error" << endl;
    }
  } else {
    cout << "error" << endl;
  }
  return 0;
}
