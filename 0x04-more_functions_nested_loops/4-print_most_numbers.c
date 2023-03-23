#include "main.h"

/**
 * print_most_numbers - prints some numbers
 * void: no parameters
 * Return: void
 */

void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number != 2)
		{
			if (number != 4)
				_putchar('0' + number);
		}
	}
	_putchar('\n');
}
