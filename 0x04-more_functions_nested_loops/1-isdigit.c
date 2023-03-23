#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: substitute for input
 * Return: 1 for digit and 0 otherwise
 */

int _isdigit(int c)
{
	int number;
	int check;

	for (number = '0'; number <= '9'; number++)
	{
		if (c == number)
		{
			check = 1;
			break;
		}
		else if ((c != number) && (number == '9'))
			check = 0;
	}
	return (check);
}
