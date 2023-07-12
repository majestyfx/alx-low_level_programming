#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  function returns a pointer that duplicate of the string
 * @str: memory for new string to duplicate
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
int a = 0, b = 1;
char *s;

if (str == NULL)
	return (NULL);
while (str[b])
{
	b++;
}

s = malloc((sizeof(char) * b) + 1);
if (s == NULL)
	return (NULL);
while (a < b)
{
	s[a] = str[a];
	a++;
}

s[a] = '\0';
return (s);
}
