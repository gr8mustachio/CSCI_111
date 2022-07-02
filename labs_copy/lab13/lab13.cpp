#include<iostream>
#include<vector>

using namespace std;

int main()
{
  bool adding = true;
  string item;
  vector<string> shopping_list;
  cout << "Enter your shopping list.  Enter * to indicate you are done."
    << endl;
  while(adding)
  {
    getline(cin, item);
    if(item.compare("*") !=0)
    {
      shopping_list.push_back(item);
    } else {
      adding = false;
    }
  }
  cout << "Here is your list:" << endl;
  for(int i=0; i < shopping_list.size(); ++i)
  {
    cout << shopping_list[i] << endl;
  }
  return 0;
}
    
  
   
