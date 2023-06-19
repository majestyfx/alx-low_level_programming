#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - all possible sums of single numbers
 * Return: 0 (success)
 */
int main(void)
{
int k;
for (k = 0; k < 10; k++)
{
putchar('0' + k);
if (k != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
