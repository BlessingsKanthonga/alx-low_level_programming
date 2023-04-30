#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 * Return: 0 if successful, 1 if the number of arguments is incorrect,
 *         or 2 if the number of bytes is negative
 */

int main(int argc, char **argv)
{
	char *ptr;
	int i;
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	ptr = (char *)&main;

	for (i = 0; i < bytes; i++)
		printf("%02x", *(ptr + i) & 0xff);
	printf("\n");

	return (0);
}
