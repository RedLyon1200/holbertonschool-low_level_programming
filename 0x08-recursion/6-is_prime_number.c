#include "holberton.h"
int primos(int, int);

/**
 * is_prime_number - call primos function on return
 * @n: number
 *
 * Return: 1 if number is prime
 */
int is_prime_number(int n)
{
	return (primos(n, 2));
}

/**
 * primos - return when prime number is true
 * @num: number
 * @div: divisor
 * Return: prime number
 */
int primos(int num, int div)
{
	if (num == 1 || num < 0)
		return (0);
	if (num == div)
		return (1);
	if (num % div == 0)
		return (0);
	else
		return (primos(num, div + 1));
}
