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

	if (nmemb == 0 || size == 0)
		return (NULL);

	ret = malloc(size * nmemb);
	if (!ret)
	{
		free(ret);
		return (NULL);
	}
	return (ret);
}
