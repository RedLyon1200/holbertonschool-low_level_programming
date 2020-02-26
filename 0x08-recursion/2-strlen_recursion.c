#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 *
 * Return: size of string
 */
int _strlen_recursion(char *s)
{
	int size = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		size = _strlen_recursion(s + 1);
		size++;
	}
	return (size);
}
