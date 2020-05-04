#include "holberton.h"
/**
 * _isdigit - Check variable c and identify if it is a number
 * @c: variable
 * Return: 1 if it is number, 0 if it is not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
