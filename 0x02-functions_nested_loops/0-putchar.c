#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline
 */


int main(void)
{
    int i = 0;
    char *string = "_putchar";

    while (string[i] != '\0')
    {
        putchar(string[i]);
        i++;
    }
    putchar('\n');

    return 0;
}

