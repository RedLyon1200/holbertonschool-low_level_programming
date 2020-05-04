#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: character
 * Return: length of string
 */
int _strlen(char *s)
{
	int a;

	while (*(s + a))
		a++;

	return (a);
}
