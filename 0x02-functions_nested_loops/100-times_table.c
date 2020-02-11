#include "holberton.h"
/**
 * print_times_table - print the times table n times
 * @n: variable
 */
void print_times_table(int n)
{
	int a, b, c;
	int comma = 44, space = 32;

	if (n >= 0 && n < 15)
	{
		for (a = 0 ; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				c = a * b;
				if (c <= 9)
				{
					_putchar(comma);
					_putchar(space);
					_putchar(space);
					_putchar(space);
					_putchar(c + '0');
				}
				else if (c > 9 && c <= 99)
				{
					_putchar(comma);
					_putchar(space);
					_putchar(space);
					_putchar(c / 10 + '0');
					_putchar(c % 10 + '0');
				}
				else
				{
					_putchar(comma);
					_putchar(space);
					_putchar(c / 100 + '0');
					_putchar(c / 10 % 10 + '0');
					_putchar(c % 10 + '0');
				}
			}
			_putchar(10);
		}
	}
}
