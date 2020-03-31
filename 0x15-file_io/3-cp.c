#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define BUFFSIZE 1024
void W_err(char *file);
void R_err(char *file);
void C_err(char *file);
void _checker(char *from, char *to);


/**
 * _checker - check if files are NULL
 * @from: file1
 * @to: file2
 */
void _checker(char *from, char *to)
{
	if (from == NULL)
		R_err(from);
	if (to == NULL)
		W_err(to);
}

/**
 * C_err - print "close error" message
 * @file: readed file
 */
void C_err(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file);
	exit(100);
}

/**
 * R_err - print "read error" message
 * @file: readed file
 */
void R_err(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * W_err - print "write error" message
 * @file: writed file
 */
void W_err(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(98);
}


/**
 * main - that copies the content of a file to another file.
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: 0 success
 */
int main(int ac, char *av[])
{
	int file_from, file_to, data, retval;
	char buff[BUFFSIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_checker(av[1], av[2]);
	/* open files */
	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	data = read(file_from, buff, BUFFSIZE);
	if (data == -1)
		R_err(av[1]);

	while (data != 0)
	{
		retval = write(file_to, buff, data);
		if (retval == -1 || retval != data)
			W_err(av[2]);
		data = read(file_from, buff, BUFFSIZE);
		if (data == -1)
			R_err(av[1]);
	}
	retval = close(file_from);
	if (retval == -1)
		C_err(av[1]);
	retval = close(file_to);
	if (retval == -1)
		C_err(av[2]);
	return (0);
}
