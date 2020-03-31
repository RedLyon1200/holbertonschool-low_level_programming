#include "holberton.h"

/**
 * read_textfile - Function that reads a text file and prints it to the POSIX
 *                 standard output.
 * @letters: the number of letters it should read and print
 * @filename: name of the file
 *
 * Return: 0 if error - on success returns number of bytes writed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t tot, err;
	/* error validators */
	buffer = malloc(sizeof(*buffer) * letters);
	if (filename == NULL)
		return (0);
	if (buffer == NULL)
		return (0);
	/* open o_read file */
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	tot = read(fd, buffer, letters);
	if (tot == -1)
	{
		free(buffer);
		return (0);
	}
	if (tot > 0)
		err = write(STDOUT_FILENO, buffer, tot);
	if (err < tot)
	{
		free(buffer);
		return (0);
	}
	err = close(fd);
	if (err == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (tot);
}
