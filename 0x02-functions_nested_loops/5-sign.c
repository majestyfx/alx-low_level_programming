#include "main.h"
/**
 * print_sign - print sign of number
 * @n: the character checked
 * Return: 1 lowercase or 0 others
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}
