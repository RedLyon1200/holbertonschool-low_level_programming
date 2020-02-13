#include "holberton.h"
/**
 * _isupper - check if the variable c is an uppercase alphabetic character
 * @c: variable
 * Return: 1 if it is capital, 0 if it is not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
