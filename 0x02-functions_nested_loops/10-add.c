#include <stdio.h>

/**
 * add - Adds two integers
 * @x: First integer
 * @y: Second integer
 *
 * Return: Sum of x and y
 */
int add(int x, int y)
{
    int sum;

    sum = x + y;
    return (sum);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int s;

    s = add(3, 3);
    putchar(s + '0');
    putchar('\n');
    return (0);
}

