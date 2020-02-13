#include <stdio.h>

/**
 * main - Fizz Buzz
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if ((count % 3) == 0 && (count % 5) != 0)
			printf("Fizz ");
		else if (count == 100)
			printf("Buzz");
		else if ((count % 5) == 0 && (count % 3) != 0)
			printf("Buzz ");
		else if ((count % 3) == 0 && (count % 3) == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", count);
	}
	printf("\n");
	return (0);
}
