#include "holberton.h"
/**
 * print_alphabet - entry point
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar(10);
}
