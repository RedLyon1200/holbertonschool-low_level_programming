#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @txt: character string
 * Return: uppercase string
 */
char *string_toupper(char *txt)
{
	int i;

	for (i = 0; txt[i] != '\0'; i++)
	{
		if (txt[i] >= 'a' && txt[i] <= 'z')
			txt[i] = (int) txt[i] - 32;
	}
	return (txt);
}
