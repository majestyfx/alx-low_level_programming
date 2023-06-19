#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print the sum of three digits
 * Return: 0 (success)
 */
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = i; j < 100; j++)
{
putchar('0' + (i / 10));
putchar('0' + (i % 10));
putchar(' ');
putchar('0' + (j / 10));
putchar('0' + (j % 10));
if (i == 98 &&  j == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
