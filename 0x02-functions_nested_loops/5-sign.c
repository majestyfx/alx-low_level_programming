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
putchar(43);
return (0);
}
else if (n > 0)
{
putchar(48);
return (1);
}
else
{
putchar(45);
return (-1);
}
}
