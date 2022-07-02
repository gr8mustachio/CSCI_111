#ifndef JURY_FUNCTIONS_H
#define JURY_FUNCTIONS_H
struct Juror {
  std::string name;
  int age;
  bool guilty_verdict;
};

/********************************
 * Assign 12 jurors to the jury *
 ********************************/
void identify_jury(Juror jury[]);
/**************************************************
 * Any juror with a first name beginning with     *
 * letter Q-Z believes the defendant to be guilty *
 **************************************************/
void calculate_guilt(Juror jury[]);
/******************************************************
 * Each juror's sentiment wrt the defendant is stated *
 ******************************************************/
void read_the_verdict(Juror jury[]);
#endif
