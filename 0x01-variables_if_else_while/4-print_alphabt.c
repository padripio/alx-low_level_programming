#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase letters from 'a' to 'z'
 * excluding 'q' and 'e', followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *letters = "abcdefghijklmnopqrstuvwxyz";
    int i;

    for (i = 0; letters[i] != '\0'; i++)
    {
        if (letters[i] == 'q' || letters[i] == 'e')
            continue;
        else
            putchar(letters[i]);
    }

    putchar('\n');
    return 0;
}

