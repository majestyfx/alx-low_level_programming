#include "main.h"

/**
 * print_numbers - checks for uppercase character
 * Return: nimbers from 0 upto 9
 */

void print_numbers(void)
{
int c;
for (c = 0; c <= 9; c++)
{
_putchar('0' + c);
}
_putchar('\n');
}
