#include <stdio.h>

/**
 * main - deduces largest prime factor
 * void: takes no parameters
 * Return: 0
 */

int main(void)
{
	long int number = 612852475143;
	int not_done = 1;
	int done = 1;
	int prime = 2;
	int number2;

	while (not_done == done)
	{
		if (((number % prime) == 0) && !((number / prime) == 1))
		{
			number /= prime;
		}
		else if (((number / prime) == 1) && ((number % prime) == 0))
		{
			number2 = prime;
			not_done = 0;
		}
		if ((number % prime) != 0)
			prime++;
	}
	printf("%d\n", number2);
	return (0);
}
