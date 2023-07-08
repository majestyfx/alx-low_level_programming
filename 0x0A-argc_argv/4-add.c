#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the number of arguements positive
 * @argc: variable to print
 * @argv: arguement vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int j;
unsigned int k, sum = 0;
char *e;

if (argc > 1)
{
	for (j = 1; j < argc; j++)
	{
		e = argv[j];
		for (k = 0; k < strlen(e); k++)
		{
			if (e[k] < 48 || e[k] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(e);
		e++;
	}
	printf("%d\n", sum);
}
else
{
	printf("0\n");
}
return (0);
}

