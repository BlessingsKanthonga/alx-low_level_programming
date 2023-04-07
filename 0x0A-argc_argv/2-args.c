#include <stdio.h>

/**
 * main - prints arguments
 * @argc: arguments count
 * @argv: array of arguments
 * Return: 0 if succezz
 */

int main(int argc, char *argv[])
{
	int count;

	if (*argv != NULL)
	{
		for (count = 0; count < argc; count++)
			printf("%s\n", argv[count]);
	}

	return (0);
}
