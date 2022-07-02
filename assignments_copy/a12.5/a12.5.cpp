#include<iostream>
#include<vector>

using namespace std;

int main()
{
  bool adding = true;
  int largest = 0;
  string item;
  string output;
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
  largest = shopping_list[0].length();
  for(int i=0; i < shopping_list.size(); ++i)
  {
    if(largest < shopping_list[i].length())
      largest=shopping_list[i].length(); 
  }
  for(int i=0; i < largest+4; ++i)
    output+="-";
  output+="\n";
  for(int i=0; i<shopping_list.size(); ++i){
    output+="| ";
    output+=shopping_list[i];
    for(int j=0; j<largest-shopping_list[i].length(); ++j)
      output+=" ";
    output+=" |\n";
  }
  for(int i=0; i<largest+4; ++i)
    output+="-";
  cout << output;
  return 0;
}
    
  
   
