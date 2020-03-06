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
 * exiterror - exit with error message and exit(98)
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
 * _strlen_recursion - returns the length of a string.
 * @s: string
 *
 * Return: size of string
 */
int _strlen_recursion(char *s)
{
	int size = 0;

	if (*s == '\0' || *s < 0 || *s > 9)
	{
		exiterror();
	}
	else
	{
		size = _strlen_recursion(s + 1);
		size++;
	}
	return (size);
}



/**
 * main - mult 2 numbers
 * @argc: number of arguments
 * @argv: arguments passed
 *
 * Return: 0 success
 *
 */
int main(int argc, char *argv[])
{
	int sizeofarg1, sizeofarg2;

	(void) argv;

	if (argc != 3)
		exiterror();

	sizeofarg1 = _strlen_recursion(argv[1]);
	sizeofarg2 = _strlen_recursion(argv[2]);

	return (0);
}
