#include "holberton.h"
/**
 * _strchr - description
 * @s: string
 * @c: character
 * Return: result
 */
char *_strchr(char *s, char c)
{
	int count = 0;

	for (count = 0; s[count] != c; count++)
	{
		if (s[count] == c)
			return (s + count);
	}
	if (s[count] == c)
		return (s + count);

	return ('/0');
}
