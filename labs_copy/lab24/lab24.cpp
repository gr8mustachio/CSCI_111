#include<iostream>
#include<fstream>
#include<string>
#include<exception>
using namespace std;

int main()
{
  string str;
  int num;
  ifstream inf("joustdata.txt");
  if(inf)
  {
    for(int i=0; i<16; ++i)
    {
      str = "";
      getline(inf, str, '|');
      try
      {
        num = stoi(str);
        cout << num+99 << endl;
      }
      catch(exception& e)
      {
        cout << str << endl;
      }
    }
  }
  return 0;
}


