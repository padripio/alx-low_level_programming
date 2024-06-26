#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: The character to check
 *
 * Return: 1 if c is a letter (a-z or A-Z), 0 otherwise
 */
int _isalpha(int c)
{
    int is_letter = 0;

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        is_letter = 1;
    }

    return is_letter;
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

