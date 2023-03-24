#include "main.h"

/**
 * print_square - prints a square
 * int: data type for parameter
 * @size: for substituting in size of square
 * Return: void
 */

void print_square(int size)
{
	int count;
	int count2;

	if ((size == 0) || (size < 0))
		_putchar('\n');

	for (count = 1; count <= size; count++)
	{
		for (count2 = 1; count2 <= size; count2++)
			_putchar(35);

		_putchar('\n');
	}
}
