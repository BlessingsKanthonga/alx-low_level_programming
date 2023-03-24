#include "main.h"

/**
 * print_number - prints an integer
 * @n: input substitute
 * Return: void
 */

void print_number(int n)
{
	int sign;

	if (n < 0)
	{
		sign = 45;
		n *= -1;
	}
	if (((n >= 0) && (n < 10)) || ((n < 0) && (n > -10)))
	{
		if (sign == 45)
			_putchar(45);
		_putchar('0' + n);
	}
	else if (((n > 9) && (n < 100)) || ((n < -9) && (n > -100)))
	{
		if (sign == 45)
			_putchar(45);
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else if (((n > 99) && (n < 1000)) || ((n < -99) && (n > -1000)))
	{
		if (sign == 45)
			_putchar(45);
		_putchar('0' + (n / 100));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 100));
	}
	else if (((n > 999) && (n < 10000)) || ((n < -999) && (n > -10000)))
	{
		if (sign == 45)
			_putchar(45);
		_putchar('0' + (n / 1000));
		_putchar('0' + ((n / 100) % 10));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
}
