#include "holberton.h"
/**
 * print_last_digit - print the last digit of n
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (n < 0)
		ld = ld * -1;
	_putchar(ld + '0');
	return (ld);
}
