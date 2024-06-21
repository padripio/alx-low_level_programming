/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	char * value;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/*get the last digit*/
	int last_digit=n%10;
	
	/*setting value */
	if (last_digit >5)
	value="and is greater than 5";
	else if (last_digit ==0)
	value="and is 0";
	else
	value="and is less than 6 and not 0";
	/*formatting the output */
	printf("Last digit of %d is %d %s\n",n,last_digit,value);
	/* your code goes there */
	return (0);
}