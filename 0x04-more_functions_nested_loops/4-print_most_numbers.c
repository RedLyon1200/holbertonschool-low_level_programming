#include "holberton.h"
/**
 * print_most_numbers - print the numbers from 0 to 9, but not 2 and 4
 */
void print_most_numbers(void)
{
	int num = 48;

	while (num < 58)
	{
		if (num == 50 || num == 52)
			num++;
		_putchar(num);
		num++;
	}
	_putchar(10);
}
