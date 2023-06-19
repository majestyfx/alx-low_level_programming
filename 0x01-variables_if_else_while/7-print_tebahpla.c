#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print letters in reverse starting from z
 * Return: 0 (success)
 */
int main(void)
{
char let;
for (let = 'z'; let >= 'a'; let--)
putchar(let);
let--;
putchar('\n');
return (0);
}
