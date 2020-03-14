#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers then a new line
 * @separator: char string to separate numbers
 * @n: number of args passed to function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
