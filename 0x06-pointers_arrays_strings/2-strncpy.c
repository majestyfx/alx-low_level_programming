#include "main.h"


/**
 * _strncpy - copies most inputed number
 * of bytes from string src to dest
 * @dest: buffer for storing
 * @src: string source
 * @n: maximum number of bytes for src to copy
 * Return: a pointer to the resulting string dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (dest[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len;  index < n; index++)
	dest[index] = '\0';

	return (dest);
}
