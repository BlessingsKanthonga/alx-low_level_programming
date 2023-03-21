#include "main.h"

/**
 * print_sign - prints the sign of a number
 * int: takes integers as parameters
 * @n: substitutes for input
 * Return: 1 or 0 or -1
 */

int print_sign(int n)
{
	int check;

	if (n > 0)
	{
		check = 1;
		_putchar(43);
	}
	else if (n == 0)
	{
		check = 0;
		_putchar(48);
	}
	else
	{
		check = -1;
		_putchar(45);
	}
	return (check);
}
