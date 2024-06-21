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
{
    char * letters="abcdefghijklmnopqrstuvwxyz";
    /*char * LETTERS="ABCDEFGHIJKLMNOPQRSTUVWXYZ"; */
    int i;
    for (i=0;letters[i]!='\0';i++)
    {   if (letters[i] =='q' || letters[i]=='e')
        continue;
        else
        putchar(letters[i]);}
    
    putchar('\n');
    
}