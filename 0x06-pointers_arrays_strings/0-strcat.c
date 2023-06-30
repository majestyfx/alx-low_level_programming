#include "main.h"
#include <stdio.h>
/**
 * _strcat -  commemorate the two strings
 * @dest: string to be appended upon
 * @src: string to be appened to dest
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, r;

	while (dest[dlen])
	{
		dlen++;
	}
	for (r = 0; src[r] != 0; r++)
	{
		dest[dlen] = src[r];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
