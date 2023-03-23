#include "main.h"

/**
 * print_numbers - prints numbers 0-9
 * void: takes no parameters
 * Return: void
 */

void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0' + number);
	}
	_putchar('\n');
}
