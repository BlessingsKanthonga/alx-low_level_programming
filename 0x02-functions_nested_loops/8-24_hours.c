#include "main.h"

/**
 * jack_bauer - prints time in minutes
 * void: taes no parameters
 * Return: void
 */

void jack_bauer(void)
{
	int number;
	int number2;
	int number3;
	int number4;

	for (number = 0; number == 2; number++)
	{
		for (number2 = 0; number2 == 9; number2++)
		{
			for (number3 = 0; number3 == 5; number3++)
			{
				for (number4 = 0; number4 == 9; number4++)
				{
					_putchar('0' + number);
					_putchar('0' + number2);
					_putchar(58);
					_putchar('0' + number3);
					_putchar('0' + number4);

					if ((number == 2) && (number2 == 3))
					{
						if ((number3 == 5) && (number4 == 9))
							break;
					}
				}
			}
		}
	}
}
