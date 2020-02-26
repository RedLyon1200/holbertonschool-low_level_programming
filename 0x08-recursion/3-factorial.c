#include "holberton.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: number
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	int fac = n;

	if (fac == 0)
		return (1);
	else if (fac < 0)
		return (-1);
	return (fac * factorial(fac - 1));
}
