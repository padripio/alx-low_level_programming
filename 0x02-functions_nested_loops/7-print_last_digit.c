#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The integer to find the last digit of
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
    int last_digit;

    last_digit = n % 10;
    return (last_digit);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int ld;

    ld = print_last_digit(5);
    putchar(ld + '0');
    putchar('\n');
    return (0);
}

