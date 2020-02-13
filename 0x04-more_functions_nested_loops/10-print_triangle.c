#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int count, count2, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (count = 0; count < size; count++)
	{
		for (count2 = 0; count2 < size; count2++)
		{
			space = size - count - 1;
			if (count2 < space)
			{
				_putchar(' ');
			}
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
