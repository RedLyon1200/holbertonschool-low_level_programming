#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - create aray
 * @nmemb: number of elements
 * @size: number of bytes for elements
 *
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ret;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ret = malloc(size * nmemb);
	if (ret == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
		ret[i] = 0;
	return (ret);
}
