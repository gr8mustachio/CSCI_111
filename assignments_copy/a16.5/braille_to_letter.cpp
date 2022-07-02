#include "braille_to_letter.h"
#include<unordered_map>

char braille_to_letter(char braille[6])
{
  unordered_map<string, char> btoch;
  btoch["*....."]='A';
  btoch["*.*..."]='B';
  btoch["**...."]='C';
  btoch["**.*.."]='D';
  btoch["*..*.."]='E';
  btoch["***..."]='F';
  btoch["****.."]='G';
  btoch["*.**.."]='H';
  btoch[".**..."]='I';
  btoch[".***.."]='J';
  btoch["*...*."]='K';
  btoch["*.*.*."]='L';
  btoch["**..*."]='M';
  btoch["**.**."]='N';

  
}
