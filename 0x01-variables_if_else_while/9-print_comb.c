#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - all possible sums of single numbers
 * Return: 0 (success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
putchar('0' + i);
if (i != 9)
putchar(',');
putchar(' ');
putchar('\n');
return (0);
}
