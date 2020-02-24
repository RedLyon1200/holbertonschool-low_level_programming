#include "holberton.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: character
 * @accept: character string
 *
 * Return:number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int count, count1, result = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (count1 = 0; accept[count1] != '\0'; count1++)
		{
			if (s[count] == accept[count1])
			{
				result++;
				break;
			}
		}
		if (accept[count] == '\0')
			return (result);
	}
	return (result);
}
