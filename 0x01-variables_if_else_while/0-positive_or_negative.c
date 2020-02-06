#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print a random number indicating if it is negative, positive or zero
 * Return: 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
