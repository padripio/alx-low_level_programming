#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
    int hour;
    int minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {
            if (hour < 10)
            {
                putchar('0');
                putchar(hour + '0');
            }
            else
            {
                putchar((hour / 10) + '0');
                putchar((hour % 10) + '0');
            }
            putchar(':');
            if (minute < 10)
            {
                putchar('0');
                putchar(minute + '0');
            }
            else
            {
                putchar((minute / 10) + '0');
                putchar((minute % 10) + '0');
            }
            putchar('\n');
        }
    }
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    jack_bauer();
    return (0);
}

