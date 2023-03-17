#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digit on a number
 * void: no parameters
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, x % 10);
	if ((x % 10) > 5)
	{
		printf("and is greater than 5\n");
	}
	if ((x % 10) == 0)
	{
		printf("and is 0\n");
	}
	if (((x % 10) < 6) && ((x % 10) != 0))
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
