#include "holberton.h"
/**
 * _strstr - function
 * @haystack: substring
 * @needle: string
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0, k = i; needle[j] != '\0'; j++, k++)
		{
			if (needle[j] != haystack[k] || haystack[k] == '\0')
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (0);
}
