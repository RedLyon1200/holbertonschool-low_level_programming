#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - sum a and b
 * @a: num1
 * @b: num2
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	if (a == 0 || b == o)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

int op_mod(int a, int b)
{
	if (a == 0 || b == o)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
