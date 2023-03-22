#include "main.h"

/**
 * times_table - prints 9 times talbe
 * void: takes no parameters
 * Return: no return since itsis void
 */

void times_table(void)
{
	int number;
	int number2;
	int temp;

	for (number = 0; number < 10; number++)
	{
		for (number2 = 0; number2 < 10; number2++)
		{
			temp = number * number2;
			
			if (temp > 9)
			{
				_putchar('0' + (temp / 10));
				_putchar('0' + (temp % 10));
			}
			if (temp < 10)
			{
				_putchar('0' + temp);
			}
			if (number2 == 9)
			{
				break;
			}

			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
