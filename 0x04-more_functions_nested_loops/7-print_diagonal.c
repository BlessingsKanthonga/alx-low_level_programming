#include "main.h"

/**
 * print_diagonal - draws diagonal
 * @n: input sibstitute of intege rtype
 * Return: nothing
 */

void print_diagonal(int n)
{
	int number;
	int number2;

	if ((n == 0) || (n < 0))
		_putchar('\n');

	for (number = 1; number < n + 1; number++)
	{
		number2 = number;

		if (number == 1)
			_putchar(92);
		else
		{
			while (number2 > 1)
			{
				_putchar(' ');
				number2--;
			}
			_putchar(92);
		}

		_putchar('\n');
	}
}
