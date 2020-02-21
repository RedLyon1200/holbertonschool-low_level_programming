#include "holberton.h"
/**
 * leet - 1337
 * @str: string
 *
 * Return: string with 1337;
 */

char *leet(char *str)
{
	int i;
	int j;
	char from[] = "aeotlAEOTL";
	char to[] = "4307143071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; from[j] != '\0'; j++)
		{
			if (str[i] == from[j])
			{
			str[i] = to[j];
			}
		}
	}

	return (str);
}
