#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the size in bytes of various data types
 *              using the sizeof operator and printf.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("size of char: %zu byte(s)\n", sizeof(char));
    printf("size of int: %zu byte(s)\n", sizeof(int));
    printf("size of long int: %zu byte(s)\n", sizeof(long int));
    printf("size of long long int: %zu byte(s)\n", sizeof(long long int));
    printf("size of float: %zu byte(s)\n", sizeof(float));

    return 0;
}

