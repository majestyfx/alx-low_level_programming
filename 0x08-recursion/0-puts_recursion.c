#include "main.h"

/**
 * _puts_recursion - print string followed by new line
 * @s: string to print
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	s++;
	_puts_recursion(s);
}
