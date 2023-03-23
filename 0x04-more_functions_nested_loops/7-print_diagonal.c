#include "main.h"

/**
 * print_diagonal - draws diagonal
 * @n: input sibstitute of intege rtype
 * Return: nothing
 */

void print_diagonal(int n)
{
	int count;
	int count2;

	for (count = 0; count <= n; count++)
	{
		count2 = n - 1;

		while (count2 > 0)
		{
			_putchar(' ');
			count2--;
		}
		
		if ((n == 0) || (n < 0))
			_putchar('\n');
		else
		{
			_putchar(92);
			_putchar('\n');
		}
	}
}
