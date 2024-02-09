//write include statements
#include <iostream>
#include "data_types.h"
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cout;
using std::cin;


int main()
{
	//defining variables
	double meal_amount = 0.0;
	double tip_rate = 0.0;
	double sales_tax_amount = 0.0;
	double tip_amount = 0.0;
	double total = 0.0;

	//getting user input
	cout<<"How much did you spend on your meal? ";
	cin>>meal_amount;
	cout<<"What percent did you tip? (Please answer in percentage): "; //wasn't sure which to build my program around, so I chose percentage, not decimal
	cin>>tip_rate;

	//calling functions
	sales_tax_amount = get_sales_tax_amount(meal_amount);
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	//finding total
	total = meal_amount + sales_tax_amount + tip_amount;

	//prints 'receipt'
	cout<<"RECEIPT: \n";
	cout<<"Meal Amount:  "<<meal_amount<<"\n";
	cout<<"Sales Tax:    "<<sales_tax_amount<<"\n";
	cout<<"Tip Amount:   "<<tip_amount<<"\n";
	cout<<"Total:        "<<total<<"\n";


	return 0;
}
