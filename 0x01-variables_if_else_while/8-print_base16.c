#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{   int i;
    char c;
    for(i=0;i<10;i++)
    {
        putchar(i+'0');
    }
    for(c='a';c<='f';c++)
    {
        putchar(c);
        
    }
    putchar('\n');
    return 0;
    
    
}
