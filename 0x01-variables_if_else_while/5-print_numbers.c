#include <stdio.h>

/**
 * main - print numbers
 * void: no parameters for main
 * Return: 0
 */

int main(void)
{
	int digits;

	for (digits = 0; digits < 10; digits++)
	{
		printf("%d", digits);
	}
	printf("\n");
	return (0);
}
