#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - allocates memory
 * @b: size of memory
 *
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
	{
		exit(98);
		free(p);
	}
	return (p);
	free(p);
}
