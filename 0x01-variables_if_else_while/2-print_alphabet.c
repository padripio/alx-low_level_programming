#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *letters = "abcdefghijklmnopqrstuvwxyz";  // Pointer to the alphabet string
    int i;

    for (i = 0; letters[i] != '\0'; i++)
    {
        putchar(letters[i]);  // Print each character of the alphabet
    }
    
    putchar('\n');  // Print a newline character at the end

    return 0;
}

