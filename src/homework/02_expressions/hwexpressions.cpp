#include "hwexpressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
double get_sales_tax_amount(double meal_amount)
{
	return meal_amount * tax_rate;
}
//finds sales tax

double get_tip_amount(double meal_amount, double tip_rate)
{
	double decimal_tip_rate = tip_rate / 100; //converts percentage to decimal
	return meal_amount * decimal_tip_rate;
}




