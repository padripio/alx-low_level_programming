#include <stdio.h>
#include "main.h"

/**
 * print_sign - Determines the sign of a number
 * @n: The integer to check
 *
 * Return: 1 if n is greater than 0, 0 if n is 0, -1 if n is less than 0
 */
int print_sign(int n)
{
        if (n > 0)
    {
        _putchar('+'); 
        return 1;
    }
    else if (n < 0)
    {
        _putchar('-');  
        return -1;
    }
    else
    {
        _putchar('0'); 
        return 0;
    }
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

