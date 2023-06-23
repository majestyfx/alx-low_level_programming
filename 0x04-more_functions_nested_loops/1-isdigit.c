#include "main.h"

/**
 * _isdigit - a function that checks for a digit 0 through 9.
 * @c: function to be checked 
 * Return: 1 for number or 0 for anyelse
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);

}
