#include "holberton.h"
/**
 * times_table - print the table 9 times starting from scratch
 */
void times_table(void)
{
	int a, b;
	int comma = 44, space = 32;

	for (a = 0; a <= 9; a++)
	{
		b = 0;
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			if ((a * b) <= 9)
			{
				_putchar(comma);
				_putchar(space);
				_putchar(space);
				_putchar(a * b + '0');
			}
			else
			{
				_putchar(comma);
				_putchar(space);
				_putchar(a * b / 10 + '0');
				_putchar(a * b % 10 + '0');
			}
		}
		_putchar(10);
	}
}
