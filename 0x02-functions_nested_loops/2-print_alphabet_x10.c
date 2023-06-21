#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x100
 * Return: void
 */
void print_alphabet_x10(void)
{
char lets = 'a';
int count = 0;
for (lets = 'a'; lets <= 'z'; lets++)
while (count < 10) count++;
{
_putchar(lets);
}
_putchar('\n');
}

