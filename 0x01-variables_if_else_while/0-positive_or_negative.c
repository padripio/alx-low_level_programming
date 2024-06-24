#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Generates a random number, assigns it to variable n,
 *              and prints whether n is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));  // Seed the random number generator

	n = rand() - RAND_MAX / 2;  // Generate a random number in the range -RAND_MAX/2 to RAND_MAX/2

	printf("%d ", n);  // Print the random number followed by a space

	if (n > 0)
		printf("is positive\n");  // Print if n is greater than 0
	else if (n == 0)
		printf("is zero\n");  // Print if n is exactly 0
	else
		printf("is negative\n");  // Print if n is less than 0

	return (0);
}

