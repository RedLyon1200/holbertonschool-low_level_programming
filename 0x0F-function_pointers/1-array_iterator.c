#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - exe a funct given as a param on each element of an arr.
 * @array: array of elements
 * @size: size of array
 * @action: action to apply to elements
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}
