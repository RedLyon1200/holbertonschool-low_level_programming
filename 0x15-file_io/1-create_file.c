#include "holberton.h"

/**
 * create_file - function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: -1 if error, 1 success
 */
int create_file(const char *filename, char *text_content)
{
	int err = 0, size = 0;
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	char *buffer;

	if (text_content == NULL)
		text_content = "";
	if (fd < 0)
	{
		return (-1);
	}
	while (!text_content[size]) /* size of content */
		size++;

	buffer = malloc(sizeof(*buffer) * size);
	if (buffer == NULL)
	{
		free(buffer);
		return (-1);
	}

	err = write(fd, text_content, size);
	if (err < 0)
	{
		free(buffer);
		return (-1);
	}
	close(fd);
	free(buffer);
	return (1);
}
