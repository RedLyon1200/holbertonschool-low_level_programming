#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *conc;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	conc = malloc((i + j - 1) * sizeof(*conc));
	if (conc == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		conc[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		conc[i + j] = s2[j];
	conc[i + j] = '\0';

	return (conc);
}
