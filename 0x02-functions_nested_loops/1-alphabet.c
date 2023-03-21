#include "main.h"

/**
 * print_alphabet - prints the alphabet using _putchar
 * void: no parameters
 * Return: 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
