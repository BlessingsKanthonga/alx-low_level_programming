#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * int: takes integer parameter
 * @c: substitute for input
 * Return: last value of the digit
 */

int print_last_digit(int c)
{
	int last = c % 10;

	if (last < 0)
	{
		last *= -1;
	}

	_putchar('0' + last);

	return (last);
}
