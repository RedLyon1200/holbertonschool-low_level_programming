#include <stdio.h>
/**
 * main - print number of arguments passed
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
