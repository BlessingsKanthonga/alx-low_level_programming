#include "main.h"

/**
 * print_line - prints straight line
 * @n: takes one parameter that is an integer
 * Return: void
 */

void print_line(int n)
{
	int count = n;

	if ((n == 0) || (n < 0))
		_putchar('\n');

	while (count > 0)
	{
		_putchar(95);
		count--;
	}

	if (n > 0)
		_putchar('\n');
}
