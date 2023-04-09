#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds
 * @argc: count
 * @argv: arguments
 * Return: 0 if success else 1
 */

int main(int argc, char *argv[])
{
	int count = 1;
	int result = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		while (argv[count] != NULL)
		{
			if (!(isdigit(*argv[count])))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result += atoi(argv[count]);
			}
			count++;
		}
		printf("%d\n", result);
	}
	return (0);
}
