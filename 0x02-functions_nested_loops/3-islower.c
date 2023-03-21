#include "main.h"

/**
 * islower - checks if character is lowercase
 * int c: takes one parameter of type int
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
