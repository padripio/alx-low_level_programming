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
    char *letters = "abcdefghijklmnopqrstuvwxyz"; 
    int i;

    for (i = 0; letters[i] != '\0'; i++)
    {
        putchar(letters[i]);  
    }
    
    putchar('\n'); 

    return 0;
}

