//write includes statements
#include <iostream>
#include "loops.h"
#include <cctype>

//write using statements for cin and cout
using std::cout;	using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	std::string option;
	int number;		//  Initialize the number once
	do
	{
		cout << "\nEnter a number between 1 and 20: \t";
		cin >> number;											//  User input needed for number that you want factorialized
		while(number < 1 || number > 20)		//  If number is less than on or exceeds 20, then error will be posted 
		{
			cout << "\nERROR! Number must be within number range!" << std::endl;
			cout << "Please enter a number between 1 and 20: \t";
			cin >> number;
		}

		int answer = factorial(number);		//  Initialize "answer" with the factorrial product

		cout << "\nThe factorial of " << number << " is: " << answer << std::endl;		//  Prints factorial product

		cout << "Would you like to continue? (input 'Y' or 'y' to repeat)\t";		//  Asks the user if they would like to try another number
		cin >> option;																//  If yes then program will loop
	} while (option == "Y" || option == "y");
	
	return 0;
}

//  How would you write this with an unsigned long long? My numbers were still inaccurate every time.