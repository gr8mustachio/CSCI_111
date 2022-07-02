/***********************************************************
Program Name: Triangle Area Calculator
Program Author: Kyle NoCompile
Date Created: 8/31/2016
Program Description: 
	This program gets the dimensions of a triangle (base
	and height) from the end user and then calculates the
	area of the triangle. (Base * Height) / 2 
	
Modified Date:
Modified Description:
***********************************************************/

//error on declaring the include iostream command
#include<iostream>

using namespace std;

//incorrectly declared the main method by using integer instead of int
int main()
{
  //needs a semicolon
	float base;
  //should not start variable name with a number needlessly
	float height;
  //bad (but not incorrect) syntax. should not start a variable name with _
  
	float answer;
  //cant be named the same as another variable! 
	string str = "The answer is ";

	// Greet the user
  // cheverons need a space between the cheverons and everything else. also had an extra endl. also needed quotations around "Hello Friend"
	cout << "Hello, Friend!" << endl;

	// Ask for the triangle base
  // needs an endl
	cout << "What is the length of the base of the triangle?" << endl;
	cin >> base;

	// Ask for the triangle height
  // needs a space beofre and after chevrons and an endl
	cout << "What is the height of the triangle? " << endl;
  //cant have an endl for cin
	cin >> height;

	// Reassuring message
  // needs spaces between chevrons and only one endl at the end
	cout << endl << "Thanks, I'm doing some math now..." << endl;

	// Do some math
  // all math sould be done on this line
	answer = (base * height) / 2;
	
	// Display the area of the triangle
  // math should be done on line 53. also needs spaces with the chevrons
	cout << str << answer << endl;

	return 0;
}
