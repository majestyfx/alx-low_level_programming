#include "main.h"

/**
 * _strcmp - compare pointer to string
 * @s1: pointer to first string to compare
 * @s2: pointer to second string to compare
 * Return: if str1 < str2, the negetive diff of the first unmatched character
 * if str1 == str2, 0.
 * if str1 > str2, the positive diff of the first unmatched character
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
