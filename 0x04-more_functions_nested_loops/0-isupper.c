#include "main.h"
#include <stdio.h>
int _isupper(int c);

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}

/**
 * _isupper - checks if a character is uppercase
 * @c: the character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
    char letter;

    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        if (letter == c)
        {
            return (1);
        }
    }
    return (0);
}

