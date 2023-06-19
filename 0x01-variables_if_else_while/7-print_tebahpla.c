#include <stdio.h>
/**
 * main - print letters in reverse starting from z
 * Return: 0 (success)
 */
int main(void)
{
char letter = 'z';
while (letter >= 'a')
putchar(letter);
letter--;
putchar('\n');
return (0);
}
