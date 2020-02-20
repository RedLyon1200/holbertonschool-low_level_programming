#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: character dest
 * @src: string
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;
	while (b < n && src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';

	return (dest);
}
