/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
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
    
    
}