#include <stdio.h>

/**
 * main - prints numbers using putchar
 * void: takes no parameters
 * return: 0
 */

int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar('0' + numbers);
	}
	putchar('\n');
	return (0);
}
