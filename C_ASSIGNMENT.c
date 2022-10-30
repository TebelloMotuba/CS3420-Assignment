/*Author:		Motuba Tebello
Stundent ID:	202000687
Email:			tebellomotubalyn3@gmail.com
Contacts:		+266 68597585
Date:			30 October 2022
Task:			Finding reversible prime squares
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>

#include <math.h>
//using namespace std;
int array[10];
//array=new int[10];
int current_position=0;
int*  determine_reversible_squares();
void print_reversible_squares();
int reverse(int number);
bool compare(double number1,double number2);
bool is_prime(double number);
bool is_square_of_prime(double number);
 

int main(int argc, char *argv[]) {
//	*array=*(determine_reversible_squares());
//	print_reversible_squares();
	printf("%d",sqrt(1));
/*	int check=1000;
	int square_root=sqrt(check);
	printf("\n%d",square_root);*/
	
/*	double check=value;
	double square_root=sqrt(check);
//	printf("\n%f",square_root);
	if(is_prime(square_root))
	{
		printf("HOORAY");
	}
	else
	{
		printf("ooopss");
	}
	printf("\n%f",check); */
	
	return 1;
}
int reverse(int number)
{
	int reversed=0;
	while(number>0)
	{
		reversed=reversed*10+(number%10);
		number=number/10;
	}
	return reversed;
}
bool compare(double number1,double number2)
{
	return(number1==number2);
}
bool is_prime(double number)
{
	if(number-(int)number>0){//ensures that we are testing we are  dealing with an integer
		return false;
	}
	else{
		for (int i = 2; i <= number/2;i++)
    {
        if ((int)number % i == 0)
        {
            return false;
        }
    }
	}
    
    return true;
}
bool is_square_of_prime(double number)
{
	double reversed_number=reverse(number);
	number=sqrt(number);//square of the prime means that square root of the number is the prime number not the number itself;
	reversed_number=sqrt(reversed_number);
	if(!compare(number,reverse(number)))
	{
		if(is_prime(number)&&is_prime(reversed_number))
		{
			return(true);
		}
	}
	return (false);
}
void print_reversible_squares()
{
	printf("First 10 reversible square of primes are: {");
	for(int i=0;i<current_position-1;i++)
	{
		printf("%d",array[i]);
		printf(",");
	}
	printf("%d",array[current_position-1]);
	printf(",");
	
}
int*  determine_reversible_squares()
{
	for(int i=0;i<20000000;i++)
	{
		if(is_square_of_prime(i))
		{
			array[current_position]=i;
			current_position++;
			if(current_position>9)
			{
				return (array);
			}
		}
	}
}