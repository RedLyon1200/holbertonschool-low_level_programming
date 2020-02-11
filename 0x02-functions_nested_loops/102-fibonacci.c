#include <stdio.h>

int main(void)
{
	long num1 = 1, num2 = 2, num3, fib, count = 0;

	printf("1, 2, ");
	for (count = 0; count <= 46; count++)
	{
		fib = num1 + num2;
		num3 = fib;
		num1 = num2;
		num2 = num3;
		if (count == 46)
			printf("%ld, ", fib);
		else
			printf("%ld, ", fib);
	}
	fib = num1 + num2;
		num3 = fib;
		num1 = num2;
		num2 = num3;
	printf("%ld\n", fib);

	return (0);
}
