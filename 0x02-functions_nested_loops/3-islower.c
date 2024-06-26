#include <stdio.h>
#include "main.h"

/**
 * _islower - Checks if a character is a lowercase letter.
 * @c: The character to check.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c);


int main(void)
{
    char character;
    int result;

    result = _islower(108);  
    
    putchar(result);
    
    return 0;
}

int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    else
        return 0;
}
