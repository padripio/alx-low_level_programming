#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline
 */
void print_alphabet(void)
{
    int i = 0;
    char *alphabet = "abcdefghijklmnopqrstuvwxyz";

    while (alphabet[i] != '\0')
    {
        putchar(alphabet[i]);
        i++;
    }
    putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


