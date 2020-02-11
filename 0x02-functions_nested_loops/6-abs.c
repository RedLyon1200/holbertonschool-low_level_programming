#include "holberton.h"
/**
 * _abs - calculate the absolute value of an integer
 * @n: variable
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
		else if (n > 0)
			return (n);
			else
				return (0);
					}
