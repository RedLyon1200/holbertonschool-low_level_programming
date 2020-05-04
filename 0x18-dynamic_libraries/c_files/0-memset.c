#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: constant
 * @n: size
 *
 * Return: string fill
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int count = 0;

	for (count = 0; n > 0; count++)
	{
		s[count] = b;
		n--;
	}

	return (s);
}
