#include "holberton.h"
/**
 * jack_bauer - print the hours:minutes of the day
 */
void jack_bauer(void)
{
	int a = 0, b = 0;

	while (a <= 23)
	{
		while (b <= 59)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(58);
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar(10);
			b++;
		}
		b = 0;
		a++;
	}
}
