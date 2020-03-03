#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - create array with dinamic memory
 * @size: size of array
 * @c: string
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(*str));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
