#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute the absolute value of
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
    if (n < 0)
    {
        return (-n);
    }
    return (n);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int value;

    value = _abs(2);
    putchar(value + '0');
    putchar('\n');
    return (0);
}

