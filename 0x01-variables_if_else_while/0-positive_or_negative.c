#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A main function of code
 * return 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() % 201 - 100;
printf("The number %d is ", n);
if (n > 0)
{
printf("positive\n");
}
else if (n == 0)
{
printf("zero\n");
}
else
{
printf("negative\n");
}
return (0);
}

