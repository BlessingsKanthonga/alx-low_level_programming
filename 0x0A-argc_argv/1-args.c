#include <stdio.h>

/**
 * main - count arguments
 * @argc: count of arguments
 * @argv: array of argumens
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	if (*argv != NULL)
		printf("%d\n", argc - 1);
	return (0);
}
