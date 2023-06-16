#include <stdio.h>
/**
 *main - size of C program
 *Return: 0 (success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of char: %lu byte(s)\n", sizeof(char));
printf("Size of unsigned_char: %lu byte(s)\n", sizeof(unsigned char));
printf("Size of short: %lu byte(s)\n", sizeof(short));
printf("Size of unsigned_short: %lu byte(s)\n", sizeof(unsigned short));
printf("Size of int: %lu byte(s)\n", sizeof(int));
printf("Size of long: %lu byte(s)\n", sizeof(long));
printf("Size of float: %lu byte(s)\n", sizeof(float));
printf("Size of double: %lu byte(s)\n", sizeof(double));
printf("Size of long double: %lu byte(s)\n", sizeof(long double));
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(b);
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

