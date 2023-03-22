#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * void: no parameters
 * Return: none
 */

void print_alphabet_x10(void)
{
	int counter;
	char letter;

	for (counter = 0; counter < 10; counter++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
