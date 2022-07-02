#ifndef CALCULATOR_FUNCS_H
#define CALCULATOR_FUNCS_H
//function declarations
void showWelcome();
int getUserIntegerInput(); 
char getMathChoice(); //semicolon
int getInteger(bool firstNumber);
bool validateMathChoice(char choice); //semicolon
int doAddition(int int1, int int2);
int doSubtraction(int int1, int int2); //needs to name int parameters
int doMath(int firstInt, int secondInt, char mathFunc);
void showResult(int result); //semicolon and needs to name parameter result
#endif
