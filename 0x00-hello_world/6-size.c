#include <stdio.h>
/**
 *main - size of C program
 *Return: 0 (success)
 */
int main(void)
{
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of unsigned_char: %zu byte(s)\n", sizeof(unsigned char));
printf("Size of short: %zu byte(s)\n", sizeof(short));
printf("Size of unsigned_short: %zu byte(s)\n", sizeof(unsigned short));
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of long: %zu byte(s)\n", sizeof(long));
printf("Size of float: %zu byte(s)\n", sizeof(float));
printf("Size of double: %zu byte(s)\n", sizeof(double));
printf("Size of long double: %zu byte(s)\n", sizeof(long double));
return (0);
}

