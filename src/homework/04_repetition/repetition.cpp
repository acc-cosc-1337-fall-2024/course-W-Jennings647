//add include statements
#include "repetition.h"
#include "if_else_if.h"

using std::cout;


//add function(s) code here
int factorial(int num)
{
    int result = 1;
    while(num != 1)
    {
        result = result * num;
        num--;

    }
    return result;

}

int gcd(int num1, int num2)
{
    int holding = 0;  
    
    while(!(num1 == num2))
    {
        if(num1 < num2)
        {
            holding = num1;
            num1 = num2;
            num2 = holding;
        }
        else if(num1 > num2)
        {
            num1 = num1 - num2;
        }
    }

    return num1;
    
}

int menu_start()
{
	cout<<"Would you like to: \n";
	cout<<"1 - Find a factorial \n";
	cout<<"2 - Find a greatest common divisor \n";
	cout<<"3 - Exit \n";
    return 0;
}