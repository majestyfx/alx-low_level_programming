#include <stdio.h>
/**
 * main - print all base 10 single numbers
 * Return: 0 (success)
 */
int main(void)
{
int numb;
for (numb = 0; numb <= 9; numb++)
if (numb != 10)
putchar('0' + numb);
putchar('\n');
return (0);
}
