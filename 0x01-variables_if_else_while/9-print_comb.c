#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints digits from 0 to 9 separated by commas and spaces,
 *              followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');

        if (i != 9)
        {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');
    return 0;
}

