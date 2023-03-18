#include <stdio.h>

/**
 * main - prints alphabet in capital and small letters
 * Void: needs no parameters
 * Return: 0
 */

int main(void)
{
	char capital_alphabet;
	char small_alphabet;

	for (small_alphabet = 'a'; small_alphabet <= 'z'; small_alphabet++)
	{
		putchar(small_alphabet);
	}

	for (capital_alphabet = 'A'; capital_alphabet <= 'Z'; capital_alphabet++)
	{
		putchar(capital_alphabet);
	}

	putchar('\n');
	return (0);
}
