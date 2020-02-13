#include "holberton.h"

/**
 * print_square - prints a square of given size
 * @size: size of square
 * Return: none;
 */

void print_square(int size)
{
	int count, count2;

	if (size <= 0)
		_putchar('\n');
	for (count = 0; count < size; count++)
	{
		for (count2 = 0; count2 < size; count2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
