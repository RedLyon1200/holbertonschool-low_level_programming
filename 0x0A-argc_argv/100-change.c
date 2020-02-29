#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * change - change cents
 * @n: cents total value
 *
 * Return: change cents
 */
int change(int n)
{
	int cents = 0;

	if (n >= 0)
	{
		while (n - 25 >= 0)
		{
			cents++;
			n = n - 25;
		}
		while (n - 10 >= 0)
		{
			cents++;
			n = n - 10;
		}
		while (n - 5 >= 0)
		{
			cents++;
			n = n - 5;
		}
		while (n - 2 >= 0)
		{
			cents++;
			n = n - 2;
		}
		while (n - 1 >= 0)
		{
			cents++;
			n = n - 1;
		}
		return (cents);
	}
	return (cents);
}


/**
 * main - call change cents function
 * @argc: number of arguments
 * @argv: arguments passed
 *
 * Return: 0 success or 1 Error
 */
int main(int argc, char *argv[])
{
	int n, cents;

	if (argc > 1)
		n = atoi(argv[1]);

	if (n >= 0)
	{
		if (argc == 2)
		{
			cents = change(n);
			printf("%d\n", cents);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	else
		printf("0\n");
	return (0);
}
