#include "main.h"
#include <stdio.h>

int _sqrt(int n, int j);

/**
 * _sqrt_recursion - returns natural square root of number
 * @n: number to calculate the natural square root
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate natural square root
 * sqrt - square root of number
 * @n: number to calculate square root
 * @j: iterate number
 *
 * Return: natural square root
 */

int _sqrt(int n, int j)
{
	int sqrt = j * j;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (j);
	return (_sqrt(n, j + 1));
}
