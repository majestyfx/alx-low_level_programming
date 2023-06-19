#include <stdio.h>
/**
 * main - print all base 10 single numbers
 * Return: 0 (success)
 */
int main(void)
{
int numb;
for (numb = 0; numb <= 10; numb++)
if (numb != 10)
putchar(numb);
putchar('\n');
return (0);
}
