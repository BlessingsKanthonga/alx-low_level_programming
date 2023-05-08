#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file with the given name and writes the
 *               given text to it
 * @filename: name of the file to create
 * @text_content: content to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t len= 0;
	ssize_t bytes_write;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
		return (-1);

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
