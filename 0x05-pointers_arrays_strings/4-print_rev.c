#include "main.h"

/**
 * print_rev - print reverse string
 * char \*: input type
 * @s: input substitute
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;
	char check = '1';

	while (check != '\0')
	{
		if (s[count] == '\0')
		{
			while (count > 0)
			{
				count--;
				_putchar(s[count]);
			}
			check = '\0';
		}
		else
			count++;
	}
	_putchar('\n');
}
