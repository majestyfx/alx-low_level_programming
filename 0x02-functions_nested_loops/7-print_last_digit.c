#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: the character to be treated
 * Return: value of last num digit
 */
int print_last_digit(int n)
{
int last;
last = n % 16;
if (last < 0)
{
last = last + -1;
}
_putchar(last + '0');
return (last);
}
