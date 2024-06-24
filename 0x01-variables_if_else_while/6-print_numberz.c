#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 0 to 9 followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i = 0;

    while (i < 10)
    {
        putchar(i + '0');
        i++;
    }
    
    putchar('\n');
    return 0;
}

