#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates a number of arrays
 * @c: array variable
 * @size: size of the array
 *
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned char y;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
	{
		s[y] = c;
	}

	return (s);
}
