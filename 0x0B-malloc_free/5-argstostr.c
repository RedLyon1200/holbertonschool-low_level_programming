#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenate all the arguments
 * @ac: number of arguments
 * @av: double pointer to array passed
 *
 * Return: NULL if fail, else return pointer to new stringr
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	int j;
	int x;
	int y;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0, x = 0, y = 0; x < ac; i++)
	{
		if (av[x][y] == '\0')
		{
			x++;
		}
	}
	p = malloc(i * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < ac; i++, j++)
	{
		p[j] = av[i][j];
	}

	return (p);
}
