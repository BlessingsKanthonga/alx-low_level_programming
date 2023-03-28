#include "main.h"

/**
 * rev_string - reverses a string
 * char \*: input of type char pointer
 * @s: substitute for input
 * Return: void
 */

void rev_string(char *s)
{
	int count = 0;
	char check = '1';

	while (check != '\0')
	{
		if (s[count] == '\0')
		{
			_putchar('\n');

			while (count > 0)
			{
				count--;
				_putchar(s[count]);
			}
			check = '\0';
		}
		else
		{
			_putchar(s[count]);
			count++;
		}
	}
	_putchar('\n');
}
