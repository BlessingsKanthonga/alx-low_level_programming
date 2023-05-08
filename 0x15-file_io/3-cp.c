#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>

/**
 * main - copies contents of a file
 * @argc: arguments count
 * @argv: arguments
 * Return: 0 if success else exits with appropriate exit code
 */

int main(int argc, char **argv)
{
	int file, file2;
	char buffer[1024];
	ssize_t bytes_write, bytes_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file = open(argv[1], O_RDONLY);

	if (file < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(file, buffer, 1024)) > 0)
	{
		bytes_write = write(file2, buffer, bytes_read);

		if ((bytes_write != bytes_read) || (bytes_write < 0))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file);
			close(file2);
			exit(99);
		}
	}
	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file);
		close(file2);
		exit(98);
	}
	if (close(file) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
	if (close(file2) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
	}

	return (0);
}
