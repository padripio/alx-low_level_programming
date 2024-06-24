#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints digits from 0 to 9 and lowercase letters from 'a' to 'f',
 *              followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    char c;

    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');
    }

    for (c = 'a'; c <= 'f'; c++)
    {
        putchar(c);
    }

    putchar('\n');
    return 0;
}

