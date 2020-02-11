#include <stdio.h>
/**
 * main - Calculate the sum of multiples of 3 and 5 less than 1024
 * Return: 0
 */
int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			sum = sum + num;
	}
	printf("%d\n", sum);

	return (0);
}
