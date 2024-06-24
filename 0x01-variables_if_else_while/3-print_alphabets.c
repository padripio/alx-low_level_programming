#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints lowercase and uppercase letters
 * from 'a' to 'z' and 'A' to 'Z' respectively, followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *letters = "abcdefghijklmnopqrstuvwxyz";
    char *LETTERS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;

    for (i = 0; letters[i] != '\0'; i++)
    {
        putchar(letters[i]);
    }

    for (i = 0; LETTERS[i] != '\0'; i++)
    {
        putchar(LETTERS[i]);
    }

    putchar('\n');
    return (0);
}

