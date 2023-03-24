#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: parameter for inputting variable
 * Return: void
 */

void print_triangle(int size)
{
	int number5 = size;
	int number;
	int number6 = 1;
	int number4;
	int number3;

	for (number = size; number >= 0; number--)
	{
		if ((size == 0) || (size < 0))
		{
			_putchar('\n');
			break;
		}

		else if (size > 0)
		{
			while (number6 <= size)
			{
				number3 = number5;
				number4 = 1;
				while (number3 > 1)
				{
					_putchar(' ');
					number3--;
				}
				while (number4 <= number6)
				{
					_putchar(35);
					number4++;
				}
				_putchar('\n');
				number5--;
				number6++;
			}
		}
	}
}
