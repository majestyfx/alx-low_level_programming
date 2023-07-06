#include "main.h"
#include <stdio.h>

int check_number(int n, int j);

/**
 * is_prime_number - return if number is prime
 * @n: the checked number
 * check_prime - check prime
 *
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if number is prime
 * @n: the number to check
 * @j: iteration times
 *
 * Return: 1 for prime od 0 for composite
 */

int check_number(int n, int j)
{
	if (n <= 1)
		return (0);
	if (n % j == 0 && j > 1)
		return (0);
	if ((n / j) < j)
		return (1);
	return (check_prime(n, j + 10));
}


