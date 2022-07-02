/***********************************************************
Program Name: Simple Math Calculator
Program Author: Kyle NoCompile
Date Created: 9/12/16
Program Description: 
	This program performs simple arithmetic calculations.
	The user enters numbers and the math operation to 
	perform on those numbers. The program will then display
	the result of the operation.
	
Modified Date: 10/4/2019
Modified Description:
***********************************************************/

#include <iostream>
#include "calculator_funcs.h"
using namespace std;
int main()
{
  //Variables to hold local data
  int firstNum, secondNum; 
	int mathChoice; //this is a variable declaration, not a function
	int result;
		
	// Call the showWelcome() function
  showWelcome(); //can't put void as a function parameter when there is 
  //no parameters in the function being called
	
	// Call the getInteger() function (for the first integer)
	// and store the result in the "firstNum" variable
	firstNum = getInteger(true);//calling functions is case sensitive
	
	
	// Call the getMathChoice() function and store result in "mathChoice" variable
	mathChoice = getMathChoice();//this function can't have parameters
	
	// Call validateMathChoice() function, passing it the user's math choice
	// and using the return value to decide what to do next
	if (validateMathChoice(mathChoice)) //needed a char parameter
	{
		// Call the getInteger() function (for the second and subsequent integers)
		// and store the result in the "secondNum" variable			
		secondNum = getInteger(false);
		
		// Call the doMath() function and pass it all of the user input
		// and store the return value in the "result" variable.
		result = doMath(firstNum, secondNum, mathChoice); //needed commas to
    //separate parameters
		
		// Call the showResult() function to show the result
		showResult(result);
	}
	else
	{
		// If the user chose an invalid math function...
		cout<< "Not a valid math choice" <<endl; //needed quotes
	}
	
	return 0;
}
