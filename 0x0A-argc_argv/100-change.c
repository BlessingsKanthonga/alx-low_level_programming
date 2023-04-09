#include <stdio.h>
#include <stdlib.h>

/**
 * main - change
 * @argc: count of arguments
 * @argv: arguments
 * Return: number of cents if success else 1
 */

int main(int argc, char *argv[])
{
	int count;
	int value;
	int result = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		value = atoi(argv[1]);

		if (value < 0)
			printf("%d\n", 0);
		else
		{
			for (count = 0; count < 5; count++)
			{
				while ((value == coin[count]) || (value > coin[count]))
				{
					value = value - coin[count];
					result++;
				}

				if (value == 0)
					break;
			}
			printf("%d\n", result);
		}
		return (0);
	}
}
