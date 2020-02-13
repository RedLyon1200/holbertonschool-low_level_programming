#include "holberton.h"
/**
 * print_diagonal - print a diagonal line
 * @n: variable that stores the length of the line
 */
void print_diagonal(int n)
{
	int count, count1;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (count1 = 0; count1 <= count; count1++)
			{
				if (count1 != count)
					_putchar(' ');
				else
					_putchar(92);
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
