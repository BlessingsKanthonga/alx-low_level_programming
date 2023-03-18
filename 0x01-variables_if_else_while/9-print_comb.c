#include <stdio.h>

/**
 * main - print combinations of numbers
 * void: no parameters
 * Return: 0
 */

int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		if (numbers < 9)
		{
			putchar('0' + numbers);
			putchar(',');
			putchar(' ');
		}
		if (numbers == 9)
		{
			putchar('0' + numbers);
		}
	}
	putchar('\n');
	return (0);
}
