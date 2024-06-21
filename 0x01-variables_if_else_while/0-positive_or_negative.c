/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
    int n;
    char *value;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
    {
        value = " is positive";
    }
    else if (n < 0)
    {
        value = " is negative";
    }
    else
    {
        value = " is zero";
    }

    printf("%d%s\n", n, value);

    return (0);
}
