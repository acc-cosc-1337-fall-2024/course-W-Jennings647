//write include statement for decisions header
#include "hwexpressions.h"
#include "switch.h"
#include "if_else_if.h"
#include <iostream>

//using
using std::cout;
using std::cin;


//main functions
char get_letter_grade_using_if(int grade)
{
    char letter = ' ';

    if(grade < 60)
    {
        letter = 'F';
    }
    else if(grade < 70)
    {
        letter = 'D';
    }
    else if(grade < 80)
    {
        letter = 'C';
    }
    else if(grade < 90)
    {
        letter = 'B';
    }
    else if(grade <= 100)
    {
        letter = 'A';
    }
    else
    {
        letter = 'Z'; //error
    }

    return letter;
}

char get_letter_grade_using_switch(int grade)
{
    char letter = ' ';
    int check = 0;
    check = grade / 10; //finding the first two digits of the grade

    if(check <= 5)  //condensing the values that  would lead to 'F'
    {
        check = 1;
    }

    switch(check)
    {
        case 1:
            letter = 'F';
            break;
        case 6:
            letter = 'D';
            break;
        case 7:
            letter = 'C';
            break;
        case 8:
            letter = 'B';
            break;
        case 9:
            letter = 'A';
            break;
        case 10:
            letter = 'A';
            break;
        default:
            letter = 'Z'; //error
            break;
        

    }

    return letter;
}


//menu code
int menu_initialization()
{
    int menu_input = 0;

    cout<<"          MAIN MENU\n";
	cout<<"1 - Letter grade using if\n";
	cout<<"2 - Letter grade using switch\n";
	cout<<"3 - Exit\n";
    cin>>menu_input;

    return menu_input;
}

void menu_using(int menu_input, char letter_if, char letter_switch)
{
	switch(menu_input)
	{
		case 1:
			cout<<letter_if;
            cout<<" \n"; //makes the result more visible
			break;
		case 2:
			cout<<letter_switch;
            cout<<" \n"; //makes the result more visible
			break;
		case 3:
			cout<<"Exiting.";
            cout<<" \n"; //makes the result more visible
			break;
		default:
			cout<<"Invalid input.";
            cout<<" \n"; //makes the result more visible
			break;
	}

}