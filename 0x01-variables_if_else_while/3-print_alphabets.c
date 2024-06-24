#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
    char * letters="abcdefghijklmnopqrstuvwxyz";
    char * LETTERS="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;
    for (i=0;letters[i]!='\0';i++)
    {putchar(letters[i]);}
    for (i=0;LETTERS[i]!='\0';i++)
    {putchar(LETTERS[i]);}
    putchar('\n');
    return 0;
    
}
