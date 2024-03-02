//include statements
#include <iostream>
#include "func.h"
#include <string>

//write using statements
using std::cout;
using std::cin;
using std::string;

int main() 
{

	int choice = 0;
	char confirm = 'N';
	string dna = "";
	string complement = "";
	double gc_result = 0.0;

	do
	{
		cout<<"Please enter the DNA string you would like to process: ";
		cin>>dna;

		cout<<"    MAIN MENU\n";
		cout<<"1 - Find GC content\n";
		cout<<"2 - Find DNA complement\n";
		cout<<"3 - Exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				gc_result = get_gc_content(dna);
				cout<<"The gc content of "<<dna<<" is "<<gc_result<<"\n";
				break;
			case 2:
				complement = get_dna_complement(dna);
				cout<<"The complement of "<<dna<<" is "<<complement<<"\n";
				break;
			case 3:
				cout<<"Are you sure? If you would really like to exit, enter Y \n";
				cin>>confirm;
				break;
			default:
				cout<<"Invalid input \n";
				break;
				

		}
	}while(!(confirm == 'y' || confirm == 'Y'));

	return 0;
}
