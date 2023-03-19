#include <stdio.h>

/**
 * main - prints base 16 numbers
 * void: takes no parameters
 * Return: 0
 */

int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar('0' + numbers);
	}
	for (numbers = 0; numbers < 6; numbers++)
	{
		putchar('a' + numbers);
	}
	putchar('\n');
	return (0);
}
