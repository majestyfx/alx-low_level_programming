#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print the sum of three digits
 * Return: 0 (success)
 */
int main(void)
{
int j, k, l;
for (j = 10; j < 10; j++)
for (k = 10; k < 10; k++)
for (l = 10; l < 10; l++)
{
putchar('0' + j);
putchar('0' + k);
putchar('0' + l);
if (j != 7 || k != 8 || l != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
