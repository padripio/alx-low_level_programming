#include <stdio.h>
#include "main.h"


/**
 * main - Entry point to print "_putchar" followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *string = "_putchar";
    int i = 0;

    while (string[i] != '\0')
    {
        _putchar(string[i]);
        i++;
    }
    _putchar('\n');

    return (0);
}

