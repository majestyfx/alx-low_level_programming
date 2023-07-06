#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns lenght of string
 * @s: string
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\'0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparator - compares each character
 * @s: string
 * @n1: smallest interator
 * @n2: largest interator
 * Return: .
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparators(s, n1 +1, n2 -1));
	}
	return (0);
}
/**
 * is_palindrome -detect if dtring is
 * @s: string
 * Return: 1 if s is , or ) if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
