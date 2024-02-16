//write include statements
#include <iostream>
#include "decisions.h"

//using statements
using std::cout;
using std::cin;

int main() 
{
	//declaring
	int grade = 0;
	char letter_if = ' ';
	char letter_switch = ' ';
	int menu_input = 0;

	//user input
	cout<<"What number grade did you get? ";
	cin>>grade;

	//preventing negative grade
	if(grade < 0)
	{
		cout<<"Invalid input";
		return 0;
	}

	//calling functions
	letter_if = get_letter_grade_using_if(grade);
	letter_switch = get_letter_grade_using_switch(grade);

	menu_input = menu_initialization();
	menu_using(menu_input, letter_if, letter_switch);


	return 0;
}