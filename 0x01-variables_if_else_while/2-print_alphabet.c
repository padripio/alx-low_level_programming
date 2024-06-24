#include <stdio.h>

int main(void)
{
    char *letters = "abcdefghijklmnopqrstuvwxyz";
    int i;

    for (i = 0; letters[i] != '\0'; i++)
    {
        putchar(letters[i]);
    }
    putchar('\n');
    return (0);
}

