#include <main.h>
#include <stdio.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
    char i;

    for (i = '0'; i <= '9'; i++)
    {
        if (c == i)
        {
            return 1;
        }
    }
    return 0;
}
