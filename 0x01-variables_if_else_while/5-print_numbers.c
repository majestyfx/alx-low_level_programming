#include <stdio.h>
/**
 * main - print base 10 ssingle numbers starting from 0
 * Return: 0 (sucess)
 */
int main(void)
{
char numb;
for (numb = 0; numb <= 9; numb++)
putchar('0' + numb);
putchar('\n');
return (0);
}

