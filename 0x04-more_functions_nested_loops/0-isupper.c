#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the function to be checked
 * Return: 1 for capital letter or 0 for else
 */

int _isupper(int c)
{
if (c <= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
