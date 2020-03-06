#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int _putchar(char c);
void exiterror(void);




/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 *
 *
 *
 */
void exiterror(void)
{
	char error[] = "Error";
	int i = 0;

	while (error[i])
	{
		_putchar(error[i]);
		i++;
	}
	_putchar(10);
	exit(98);
}



/**
 *
 * main - mult 2 numbers
 * @argc: number of arguments
 * @argv: arguments passed
 *
 * Return: 0 success
 *
 */
int main(int argc, char *argv[])
{
	(void) argv;

	if (argc != 3)
		exiterror();

	return (0);
}
