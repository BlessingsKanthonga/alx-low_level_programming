#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads and prints the contents of a file to stdout
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the number of letters it could read and print, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes_read;
	ssize_t bytes_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	if (letters > 0)
		buffer = malloc(sizeof(char) * letters);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	bytes_read = read(file, buffer, letters);

	if (bytes_read == -1)
	{
		close(file);
		return (0);
	}

	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);

	if ((bytes_write == -1) || (bytes_write != bytes_read))
	{
		close(file);
		return (0);
	}

	close(file);
	return (bytes_read);
}
