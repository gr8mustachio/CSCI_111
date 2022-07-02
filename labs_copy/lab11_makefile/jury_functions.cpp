#include<iostream>
#include<string>
#include "jury_functions.h"
/********************************
 * Assign 12 jurors to the jury *
 ********************************/
void identify_jury(Juror jury[])
{
  jury[0].name="Odell Pinkett";
  jury[1].name="Antonietta Beam";
  jury[2].name="Wendolyn Elson";
  jury[3].name="Fae Bendickson";
  jury[4].name="Julianne Collison";
  jury[5].name="Penney Givan";
  jury[6].name="Shala Ladson";
  jury[7].name="Sharita Saari";
  jury[8].name="Monty Utsey";
  jury[9].name="Lanell Golla";
  jury[10].name="Cherryl Olesen";
  jury[11].name="Julian Mire";
}


/**************************************************
 * Any juror with a first name beginning with     *
 * letter Q-Z believes the defendant to be guilty *
 **************************************************/
void calculate_guilt(Juror jury[])
{
  for(int i=0; i<12; ++i)
    if(jury[i].name[0]>'P')
      jury[i].guilty_verdict=true;
    else
      jury[i].guilty_verdict=false;
}
/******************************************************
 * Each juror's sentiment wrt the defendant is stated *
 ******************************************************/
void read_the_verdict(Juror jury[])
{
  for(int i=0; i<12; ++i)
  {
    if(jury[i].guilty_verdict && i > 0 && jury[i-1].guilty_verdict==false)
      std::cout << std::endl;
    std::cout << "Juror " << jury[i].name << " finds the defendant ";
    if(jury[i].guilty_verdict)
      std::cout << "guilty as charged, Judge!!\n";
    else
      std::cout << "innocent, Your Honor.";
    std::cout << std::endl;
  }
}

