#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the alphabet 10 times, each on a new line
 */
void print_alphabet_x10(void)
{
    char *alphabet = "abcdefghijklmnopqrstuvwxyz";
    int i, j;

    j = 0;
    while (j < 10)
    {
        i = 0;
        while (alphabet[i] != '\0')
        {
            putchar(alphabet[i]);
            i++;
        }
        putchar('\n');
        j++;
    }
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_alphabet_x10();
    return 0;
}

