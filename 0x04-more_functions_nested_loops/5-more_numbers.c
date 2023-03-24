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
	int number2;
	int number3;
	int count = 2;
	int result;

	for (counter = 1; counter <= 10; counter++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number < 10)
				_putchar('0' + number);
			else
			{
				number2 = (number / 10);
				number3 = (number % 10);

				while (count > 0)
				{
					if (count == 2)
						result = number2;
					else
						result = number3;

					count--;
					_putchar('0' + result);
				}
				count = 2;
			}
		}
		_putchar('\n');
	}
}
