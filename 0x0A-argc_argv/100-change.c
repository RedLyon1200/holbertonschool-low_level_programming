#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n, cents;

	if (argc > 1)
		n = atoi(argv[1]);

	if (argc == 2)
	{
		if (n >= 0)
		{
			while (n - 25 >= 0)
			{
				cents++;
				n = n - 25;
			}
			while (n - 10 >= 0)
			{
				cents++;
				n = n - 10;
			}
			while (n - 5 >= 0)
			{
				cents++;
				n = n - 5;
			}
			while (n - 2 >= 0)
			{
				cents++;
				n = n - 2;
			}
			while (n - 1 >= 0)
			{
				cents++;
				n = n - 1;
			}
			printf("%d\n", cents);
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
