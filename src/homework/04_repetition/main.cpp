//write include statements
#include <iostream>
#include "repetition.h"


//write using statements
using std::cout;
using std::cin;

int main() 
{
	//declaring
	int input1 = 0;
	int input2 = 0;
	int result = 0;
	char control = 'z';
	int choice = 0;

	//user input

	//calling functions

	do
	{
		menu_start();
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Please enter the value you would like to find the factorial of: ";
				cin>>input1;
				result = factorial(input1);
				cout<<"The factorial of ";
				cout<<input1;
				cout<<" is ";
				cout<<result;
				cout<<"\n";
				break;
			case 2:
				cout<<"Please enter the 2 values you would like to find the greatest common divisor of: \n";
				cin>>input1;
				cin>>input2;
				result = gcd(input1, input2);
				cout<<"The greatest common divisor of ";
				cout<<input1;
				cout<<" and ";
				cout<<input2;
				cout<<" is ";
				cout<<result;
				cout<<"\n";
				break;
			case 3:
				cout<<"Are you sure? If you would really like to exit, enter Y \n";
				cin>>control;
				break;
			default:
				cout<<"Invalid input \n";
				break;
				

		}
	}while(!(control == 'y' || control == 'Y'));

	

	return 0;
}
