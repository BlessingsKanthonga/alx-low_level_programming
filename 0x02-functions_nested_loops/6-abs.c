#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * int: takes an integer as a parameter
 * @c: substitutes for function input
 * Return: absolute value
 */

int _abs(int c)
{
	int check;

	if (c < 0)
	{
		check = c * -1;
	}
	else
		check = c;

	return (check);
}
