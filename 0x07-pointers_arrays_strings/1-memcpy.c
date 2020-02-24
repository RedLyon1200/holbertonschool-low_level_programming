#include "holberton.h"
/**
 * _memcpy - copy a memory part
 * @dest: dest string
 * @src: string
 * @n: size
 *
 * Return: new dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int count = 0;

	while (n > count)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
