#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print the natural numbers from n to 98
 * @n: variable
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
		printf("%d\n", n);
}
