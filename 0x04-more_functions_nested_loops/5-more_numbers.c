#include "holberton.h"
/**
 * more_numbers - printf the numbers of 0 to 14, 10 times
 */
void more_numbers(void)
{
	int num, count;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
		num = 1;
		_putchar(10);
	}
}
