#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print numbers in base 16
 * Return: 0 (success)
 */
int main(void)
{
int d;
char base;
for (d = '0'; d <= '9'; d++)
putchar(d);
for (base = 'a'; base <= 'f'; base++)
putchar('\n');
putchar(base);
return (0);
}
