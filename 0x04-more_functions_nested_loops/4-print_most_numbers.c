#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Description: exclude numbers 2 and 4
 * Return: numbers from 0 upto 9
 */

void print_most_numbers(void)
{
int c = 0;
for (; c <= 9; c++)
{
if (c == 2 || c == 4)
{
continue;
}
else
{
_putchar('0' + c);
}
}
_putchar('\n');
}
