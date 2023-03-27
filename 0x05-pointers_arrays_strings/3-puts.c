#include "main.h"

/**
 * _puts - prints a string
 * char \*: takes pointer of type char as input
 * @str: substitute for input pointer
 * Return: void
 */

void _puts(char *str)
{
	char check = '1';
	int count = 0;

	while (check != '\0')
	{
		if (str[count] != '\0')
		{
			_putchar(str[count]);
			count++;
		}
		else
		{
			check = '\0';
		}
	}
	_putchar('\n');
}
