#include "holberton.h"
int nat(int, int);

/**
 * _sqrt_recursion - call func that returns the natural square root of a number
 * @n: number
 *
 * Return: natural square
 */
int _sqrt_recursion(int n)
{
	return (nat(n, 1));
}


/**
 * nat - returns the natural square root of a number.
 * @i: number
 * @j: initial number for mult
 *
 * Return: natural square
 */
int nat(int i, int j)
{
	int sq = j * j;

	if (sq > i)
		return (-1);
	if (sq == i)
		return (j);
	else
		return (nat(i, j + 1));
}
