#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to concatenate
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *conc;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n >= j)
	{
		conc = malloc(sizeof(*conc) * (i + j + 1));
		if (conc == NULL)
			return (NULL);
	}
	else
	{
		conc = malloc(sizeof(*conc) * (i + n + 1));
		if (conc == NULL)
			return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		conc[i] = s1[i];

	for (j = 0; j < n; j++)
		conc[i + j] = s2[j];
	if (j == n)
		conc[i + j] = '\0';
	return (conc);
}
