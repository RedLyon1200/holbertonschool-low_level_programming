#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: character
 */
void rev_string(char *s)
{
	int i = 0, j;
	char a, b;

	while (s[i] != '\0')
		i++;
	i--;
	for (j = 0; j < i; j++)
	{
		a = s[j];
		b = s[i];
		s[j] = b;
		s[i] = a;
		i--;
	}
}
