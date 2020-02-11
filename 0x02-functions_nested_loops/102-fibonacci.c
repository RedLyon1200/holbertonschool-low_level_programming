#include <stdio.h>
/**
 *
 */
int main(void)
{
	int num1 = 1, num2 = 2, num3, fib, count = 0;

	printf("%d,", num1);
	printf("%d,", num2);
	for (count = 0; count <= 46; count++)
	{
		fib = num1 + num2;
		num3 = fib;
		num1 = num2;
		num2 = num3;
		if (count == 46)
		       	printf("%d", fib);
		else
			printf("%d,", fib);
	}
	printf("\n");

	return (0);
}
