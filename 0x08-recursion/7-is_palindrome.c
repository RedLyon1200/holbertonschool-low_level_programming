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


/**
 * _scan_str - scan characters on string
 * @i: character
 * @j: character
 *
 * Return: character at given point
 */
int  _scan_str(char *i, char *j)
{
	if (*i != *j)
		return (0);
	else if (i >= j)
		return (1);
	else
		return (_scan_str(i + 1, j - 1));
	return (0);
}

/**
 * is_palindrome - checks if string is a polndrome
 * @s: character string
 *
 * Return: 1 if string is a polindrome, and 0 if not
 */
int is_palindrome(char *s)
{
	int size = _strlen_recursion(s);
	char *a = s;
	char *b = s + (size - 1);

	if (size == 0)
		return (1);
	return (_scan_str(a, b));
}
