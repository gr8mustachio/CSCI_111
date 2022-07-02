#include<iostream>
#include<string>
#include "jury_functions.h"
int main()
{
  Juror jury[12];
  identify_jury(jury);
  calculate_guilt(jury);
  read_the_verdict(jury);
  return 0;
}
