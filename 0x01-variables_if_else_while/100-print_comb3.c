#include <stdio.h>

/**
 * main - print combination of two digit numbers
 * void: takes no parameters
 * Return: 0
 */

int main(void)
{
	int number;
	int initial = 1;
	int number2 = initial;

	for (number = 0; number < 9; number++)
	{
		while (number2 < 10)
		{
			putchar('0' + number);
			putchar('0' + number2);

			if ((number == 8) && (number2 == 9))
			{
				break;
			}

			putchar(',');
			putchar(' ');
			number2++;
		}
		initial++;
		number2 = initial;
	}
	putchar('\n');
	return (0);
}
