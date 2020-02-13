#include "holberton.h"
/**
 * print_line - print line __________
 * @n: variable that stores the length of the line
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
			_putchar(95);
		_putchar(10);
	}
	else
		_putchar(10);
}
