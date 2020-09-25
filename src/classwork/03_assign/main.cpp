//Write the include statement for decisions.h here
#include <iostream>
#include "decision.h"

//Write namespace using statements for cout and cin
using std::cout;	using std::cin;

int main() 
{
	int grade;

	cout << "Input a grade between 0 and 100:\t";
	cin >> grade;

	cout << "\nYour letter grade is " << get_letter_grade_using_if(grade) << " (Using if statements)" << std::endl;
	cout << "Your letter grade is " << get_letter_grade_using_switch(grade) << " (Using switch statements)" << std::endl;

	return 0;
}

