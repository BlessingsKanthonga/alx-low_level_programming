#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * void: no parameters
 * Return: void
 */

void more_numbers(void)
{
	int counter;
	int number;

	for (counter = 1; counter <= 10; counter++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number < 10)
				_putchar('0' + number);
			else
			{
				_putchar('0' + (number / 10));
				_putchar('0' + (number % 10));
			}
		}
		_putchar('\n');
	}
}
