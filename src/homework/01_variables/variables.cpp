#include "variables.h"

//create a const double variable named tax_rate with value 6.75%
double tax_rate = 0.0675; // 6.75%

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write code for multiply_numbers function here
//function returns product of num1 and num2

int multiply_numbers(int num1, int num2)
{
	return num1 * num2;
}

//write function code, multiply tax_rate and meal_amount and return their 
//product.
double get_sales_tax_amount(double meal_amount)
{
	return tax_rate * meal_amount;
}

//write function code to multiply  meal_amount and tip_rate, return their product.
double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount * tip_rate;
}
