#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
string charToBraille(char c);
int main()
{  
  cout << charToBraille('c');
  cout << endl;
  //charToBraille('b');
  cout << endl;
  //stringToBraille("alphabetsoup");
  cout << endl;
  //stringToBraille("thequickbrownfoxjumpedoverthelazydog");
}
string charToBraille(char c){
  string output;
  string temp;
  unordered_map<char, string> chtob;
  chtob['a']="*     ";
  chtob['b']="* *   ";
  chtob['c']="**    ";
  chtob['d']="** *  ";
  chtob['e']="*  *  ";
  chtob['f']="***   ";
  chtob['g']="****  ";
  chtob['h']="* **  ";
  chtob['i']=" **   ";
  chtob['j']=" ***  ";
  chtob['k']="*   * ";
  chtob['l']="* * * ";
  chtob['m']="**  * ";
  chtob['n']="** ** ";
  chtob['o']="*  ** ";
  chtob['p']="*** * ";
  chtob['q']="***** ";
  chtob['r']="* *** ";
  chtob['s']=" ** * ";
  chtob['t']=" **** ";
  chtob['u']="*   **";
  chtob['v']="* * **";
  chtob['w']=" *** *";
  chtob['x']="**  **";
  chtob['y']="** ***";
  chtob['z']="*  ***";
  if(chtob.count(c)==1){
    output+= "|--|\n";
    for(int i=0; i < 5; ++i){
      output+="|";
      output+=chtob.at(c)[i];
      //temp.append(chtob.at(c), i,2);
      //output.append(chtob.at(c), i,2);
      //output+=temp;
      //temp.erase();
      if(i%2!=0){
        output+="|\n";
      }
    }
    output+="|--|\n";
  }
  return output;
}
