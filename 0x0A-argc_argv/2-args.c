#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguements passed to it
 * @argc: variable to print
 * @argv: arguement vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0, j < argc; j++)
	{
		printf("%s\n", argc[j]);
	}
	return (0);
}
