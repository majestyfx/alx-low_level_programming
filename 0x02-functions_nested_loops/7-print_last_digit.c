#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: the character to be treated
 * Return: value of last num digit
 */
int print_last_digit(int n)
{
int lst;
lst = n % 10;
if (lst < 0)
{
lst = lst * -1;
}
_putchar(lst + '0');
return (lst);
}
