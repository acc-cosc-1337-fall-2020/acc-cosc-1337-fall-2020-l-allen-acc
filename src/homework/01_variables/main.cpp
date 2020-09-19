//write include statements
#include <iostream>
#include "variables.h"
//write namespace using statement for cout
using namespace std;	using std::cout;	using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	cout << multiply_numbers(10, 10) << endl;	

	// Homework 1
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

	cout << "Meal amount:\t";
	cin >> meal_amount;
	
	tax_amount = get_sales_tax_amount(meal_amount);

	cout << "Tip amount:\t";
	cin >> tip_rate;
	tip_rate = tip_rate / 100;

	tip_amount = get_tip_amount(meal_amount, tip_rate);
	total = tip_amount + tax_amount + meal_amount;

	cout << "Reciept:\n\tMeal:\t" << meal_amount << "\n\tSales Tax:\t" << tax_amount << "\n\tTip Amount:\t" << tip_amount << "\n\tTotal:\t" <<total;

	return 0;
}
