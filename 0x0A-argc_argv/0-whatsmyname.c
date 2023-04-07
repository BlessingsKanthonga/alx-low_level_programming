#include <stdio.h>

/**
 * main - prints program name
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 1 if success else 0 if errors
 */

int main (int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
