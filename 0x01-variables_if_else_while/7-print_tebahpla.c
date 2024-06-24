#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in reverse order followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *alphabet = "abcdefghijklmnopqrstuvwxyz";
    int i;

    for (i = 25; i >= 0; i--)
    {
        putchar(alphabet[i]);
    }

    putchar('\n');
    return 0;
}

