#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }
    if (n / 10)
    {
        print_number(n / 10);
    }
    putchar(n % 10 + '0');
}

/**
 * print_to_98 - Prints numbers from n to 98
 * @n: Starting number
 */
void print_to_98(int n)
{
    while (n < 98)
    {
        print_number(n);
        putchar(',');
        putchar(' ');
        n++;
    }
    if (n == 98)
    {
        print_number(n);
    }
    putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


