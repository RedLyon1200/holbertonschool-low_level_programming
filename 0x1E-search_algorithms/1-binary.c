#include "search_algos.h"

/**
 * binary_search - function that searches for a value in
 * a sorted array of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located or -1 if failures
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, pivot, printer;

	if (!array)
		return (-1);

	while (i <= j)
	{
		printf("Searching in array: ");

		for (printer = i; printer < j; printer++)
			printf("%d, ", array[printer]);

		printf("%d\n", array[printer]);

		pivot = ((i + j) / 2);

		if (array[pivot] < value)
			i = pivot + 1;
		else if (array[pivot] > value)
			j = pivot - 1;
		else
			return (pivot);
	}

	return (-1);
}
