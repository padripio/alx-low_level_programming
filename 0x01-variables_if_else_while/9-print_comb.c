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
    
    for(i=0;i<10;i++)
    {
        putchar(i+'0');
        if (i!=9)
        {
        putchar(',');
        putchar(' ');
        }
    }
    
    putchar('\n');
    
    
}