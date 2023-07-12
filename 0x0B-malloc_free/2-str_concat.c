#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: the two strings concentrated
 */

char *str_concat(char *s1, char *s2)
{
int a = 0, b = 0, c = 0, d = 0;
char *s;

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

while (s1[a])
	a++;

while (s1[b])
	b++;

d = a + b;
s = malloc((sizeof(char) * d) +1);

if (s == NULL)
	return (NULL);

b = 0;
while (c < d)
{
if (c <= a)
s[c] = s[c];

if (c >= a)
{
s[c] = s1[b];
c++;
}

b++;
}

s[c] = '\0';
return (s);
}

