#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - duplicate string
 * @str: pointer to original array
 *
 * Return: pointer to duplicated array
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	i++;
	s = malloc(i * sizeof(*s));
	if (s == NULL)
		return (NULL);
	while (j < i)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
	free(s);
}
