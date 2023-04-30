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
	int i = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		while (argv[count] != NULL)
		{
			while (argv[count][i] != '\0')
			{
				if (!(isdigit(argv[count][i])))
				{
					printf("Error\n");
					return (1);
				}
				i++;
			}
			result += atoi(argv[count]);
			count++;
		}
		printf("%d\n", result);
	}
	return (0);
}
