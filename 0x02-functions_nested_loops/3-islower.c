#include "main.h"

/**
 * _islower - checks if character is lowercase
 * int: takes one parameter of type int
 * @c: parameter for taking inputs
 * Return: 1 if character is lowercase else 0
 */

int _islower(int c)
{
	int letter;
	int check;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
		{
			check = 1;
			break;
		}
		if ((letter == 'z') && (c != letter))
			check = 0;
	}

	return (check);
}
