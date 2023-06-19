#include <stdio.h>
/**
 * main - print letters in reverse starting from z
 * Return: 0 (success)
 */
int main(void)
{
char letter = 'z';
for (letter = 'z'; letter >= 'a'; letter++)
putchar(letter);
letter--;
putchar('\n');
return (0);
}
