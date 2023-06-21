#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x100
 * Return: void
 */
void print_alphabet_x10(void)
{
char lets;
int count = 0;
while (count <= 9)
{
for (lets = 'a'; lets <= 'z'; lets++)
{
_putchar(lets);
}
_putchar('\n');
count++;
}
}
