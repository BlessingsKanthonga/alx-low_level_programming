#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends given text to file
 * @filename: name of the file to write to
 * @text_content: content to write to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t len= 0;
	ssize_t bytes_write;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
		return (1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		bytes_write = write(file, text_content, len);

		if (bytes_write != len)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
