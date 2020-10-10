//write include statements
#include "dna.h"
#include <iostream>
#include <string>



//write using statements
using std::cout;	using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char stay_on = 'Y';
	std::string dna;
	int option;

	do
	{
		//Option select
		cout << "Enter '1' for GC Content or '2' for DNA complement:\t";
		cin >> option;

		while (option != 1 && option != 2)		//Checks for correct option
		{
		cout << "ERROR! user must enter correct option.Enter '1' for GC Content or '2' for DNA complement:\t";
		cin >> option;
		}

		//User enters DNA
		cout << "\n\nPlease enter your dna here:\t";
		cin >> dna;

		//Runs functions
		if (option == 1)
		{
			cout << "\nDNA GC contents:\t" << get_gc_content(dna) << std::endl;
		}

		else
		{
			cout << "\nDNA complementing strand:\t" <<get_dna_complement(dna) << std::endl;
		}
		

		//User enters Y to loop anything will end the program
		cout << "\n\nWould you like to keep running the program? ('y' or 'Y' for yes)\t";
		cin >> stay_on;
	} while (stay_on == 'Y' || stay_on == 'y');
	
	

	return 0;
}