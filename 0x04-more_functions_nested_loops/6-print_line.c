#include "main.h"

/**
 * print_line - prints straight line
 * @n: takes one parameter that is an integer
 * Return: void
 */

void print_line(int n)
{
	int count;

	for (count = n; count > -1; count--)
		_putchar(95);

	_putchar('\n');
}
