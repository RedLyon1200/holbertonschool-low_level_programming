#include "holberton.h"
/**
 * reverse_array - reverse array of integers
 * @a: string
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, temp = 0;

	n--;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
