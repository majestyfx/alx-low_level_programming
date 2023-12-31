#include "main.h"

/**
 * _pow-recursiom - returns value of x raised to power of y
 * @x: the value to multiply
 * @y: the times to multiply
 *
 * Return: the value of y times
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
