#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The integer to find the last digit of
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
    int last_digit;
    if (n<0)
    {n=-n;}
    last_digit = n % 10;
    if (last_digit<0)
    {
    last_digit=-last_digit;
    }
    _putchar(last_digit+'0');
    
    return (last_digit);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


