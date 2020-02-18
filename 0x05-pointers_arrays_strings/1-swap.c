#include "holberton.h"
/**
 * swap_int - exchange the values ​​of 2 integers
 * @a: variable 1
 * @b: variable 2
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
