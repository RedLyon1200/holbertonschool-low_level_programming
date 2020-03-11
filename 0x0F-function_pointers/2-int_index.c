#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of elements
 * @size: size of array
 * @cmp: pointer to compares function
 *
 * Return: 0 success, position to integer find
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int result = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result == 1)
			return (i);
		else if (i == size - 1)
			return (-1);
	}
	return ('\0');
}
