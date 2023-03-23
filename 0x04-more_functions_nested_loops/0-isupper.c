#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: subsitute for input character
 * Return: 1 if uppercase or 0 otherwise
 */

int _isupper(int c)
{
	int letter;
	int check;

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		if (c == letter)
		{
			check = 1;
			break;
		}
		else if ((c != letter) && (letter == 'Z'))
		{
			check = 0;
		}
	}
	return (check);
}
