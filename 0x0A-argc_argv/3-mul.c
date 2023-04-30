#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies args
 * @argc: counts argumentx
 * @argv: arguments array
 * Return: 0 if success 1 if not two arguments
 */

int main(int argc, char *argv[])
{
	int result;
	int one;
	int two;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		one = atoi(argv[1]);
		two = atoi(argv[2]);
		result = one * two;
		printf("%d\n", result);
		return (0);
	}
}
