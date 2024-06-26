#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
    int i, j, product;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            product = i * j;
            if (product >= 10)
            {
                putchar((product / 10) + '0');
            }
            putchar((product % 10) + '0');

            if (j != 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
        putchar('\n');
    }
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    times_table();
    return (0);
}

