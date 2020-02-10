#include "holberton.h"
/**
 * print_alphabet_x10 - 
 */
void print_alphabet_x10(void)
{
	int alpha, count = 0;

	while (count < 10)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar(10);
		count++;
	}
}
