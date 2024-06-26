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

    print_alphabet();

    return 0;
}

