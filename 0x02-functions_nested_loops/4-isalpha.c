#include "main.h"

/**
 * _isalpha - checks if input is alphabet letter
 * int: specifies that parameter is integer
 * @c: parameter for taking in input to be checked
 * Return: 1 if alphabetical else 0
 */

int _isalpha(int c)
{
	int letter;
	int check;
	int letter2;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
		{
			check = 1;
			break;
		}
		if ((c != letter) && (letter == 'z'))
		{
			for (letter2 = 'A'; letter2 <= 'Z'; letter2++)
			{
				if (c == letter2)
				{
					check = 1;
					break;
				}
				if ((c != letter2) && (letter2 == 'Z'))
					check = 0;
			}
		}
	}
	return (check);
}
