#include<iostream>
#include "calculator_funcs.h"
using namespace std;
// This function shows a nice welcome message
void showWelcome()
{
	cout<<"******************************************"<<endl;
	cout<<"Welcome to the simple calculator program!"<<endl;
	cout<<"This program will do simple addition and"<<endl; //semicolon
	cout<<"subtraction. Math is fun, so enjoy!"<<endl;
	cout<<"******************************************"<<endl;
}

// This function gets integer input from the user
int getUserIntegerInput(void) //needs to change to int return type
{
	int input;
	cin >> input; //chevrons need to go other way
	return input;
}

// This function asks the user for a math function
// and returns the user's input
char getMathChoice()
{
	char choice;
	cout<<endl<<"Please select a math function to perform (\"+\" = Addition, \"-\" = Subtraction): ";
	cin>>choice;
	return choice; //return needs to be lowercase
}

// this function asks the user for either the first integer
// or the second and returns the user's input
int getInteger(bool firstNumber)
{
	cout<<endl<<"Please enter the ";
	
	// if the "firstNumber" variable is true, then this
	// is the first number being collected
	if (firstNumber)
	{
		cout<<"first ";
	}
	// Otherwise, it's the second number being collected
	else
  { //needs curly braces
		cout<<"second ";
  } //needs curly braces
	
	cout<<"integer: ";
	
	// Call the getUserIntegerInput() function and return the return value from it
	return getUserIntegerInput(); //can't use equal sign in return 
}



// This function validates the user's match function choice
// by returning a true for valid, and a false for invalid
bool validateMathChoice(char choice)
{
	if (choice == '+' || choice == '-') //function wont work with && 
	{
		return true;
	}
	else
	{
		return false;
	}
}

// This function adds two integers
int doAddition(int int1, int int2) //can't have semicolon when defining
{
	return int1 + int2;
}

// This function subtracts the second integer
// parameter from the first integer parameter
int doSubtraction(int int1, int int2) //can't have semicolon when defining
{
	return int1 - int2;
}


// This function determines the result of the math
// operation requested by the user
int doMath(int firstInt, int secondInt, char mathFunc)
{
	// Initialize result to zero (0)
	int result = 0; // can't use == when initializing
	
	// If the math function is a "+", then call the
	// doAddition() function and store the return 
	// value in the "result" variable
	if (mathFunc == '+') //needs to use == when checking if something is true
	{
		result = doAddition(firstInt, secondInt); //case sensitive
	}
	// If the math function is a "-", then call the
	// doSubtraction() function and store the return 
	// value in the "result" variable
  else if (mathFunc == '-') //"elseif" is not a valid identifier
	{
		result = doSubtraction(firstInt, secondInt); //case sensitive
	}
	
	return result;
}

// This function displays the result of a math operation
void showResult(int result) //is a void not a bool function
{
	cout<<endl<<"The result is "<<result<<endl;
}
