#include "holberton.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int data, size = 0;

/* Error Validators */
	if (filename == NULL)
		return (-1);
/* read */
	data = open(filename, O_APPEND | O_WRONLY);

	if (data == -1)
		return (data);
/* obtains size of text */
	for (size = 0; text_content[size] != '\0'; size++)
	{
		if (write(data, &text_content[size], 1) == -1)
		{
			close(data);
			return (-1);
		}
	}
	close(data);
	return (1);
}
