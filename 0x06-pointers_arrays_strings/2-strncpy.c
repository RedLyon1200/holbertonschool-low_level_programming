#include "holberton.h"
/**
 * _strncpy - copy a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int size = 0;

	while (size < n && src[size] != '\0')
	{
		dest[size] = src[size];
		size++;
	}
	for (; size < n; size++)
		dest[size] = '\0';

	return (dest);
}
