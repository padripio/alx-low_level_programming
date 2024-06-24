#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Generates a random number, extracts its last digit,
 *              and prints a message based on the value of the last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char *value;
	int last_digit;

	srand(time(0)); 
	n = rand() - RAND_MAX / 2; 

	/* Get the last digit */
	last_digit = n % 10;

	/* Determine the value message based on the last digit */
	if (last_digit > 5)
		value = "and is greater than 5";
	else if (last_digit == 0)
		value = "and is 0";
	else
		value = "and is less than 6 and not 0";

	/* Print the formatted output */
	printf("Last digit of %d is %d %s\n", n, last_digit, value);

	return (0);
}

