#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguements passed to it
 * @argc: variable to print
 * @argv: arguement vector
 *
 * Return: 0
 */

int main (int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
