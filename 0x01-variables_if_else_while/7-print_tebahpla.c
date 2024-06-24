#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{   char *alphabet ;
    alphabet="abcdefghijklmnopqrstuvwxyz";
    int i;
    for (i=25;i>=0;i--)
    {
    putchar(alphabet[i]);
    }
    putchar('\n');
    return 0;
    
    
}
