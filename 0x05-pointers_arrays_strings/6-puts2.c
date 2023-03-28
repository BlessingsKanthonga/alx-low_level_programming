#include "main.h"

/**
 * puts2 - prints every other character
 * char \*: integer pointer as input
 * @str: sub for input
 * Return: void
 */

void puts2(char *str)
{
	int count = 0;
	char check = '1';

	while (check != '\0')
	{
		if (count % 2 == 0)
			_putchar(str[count]);
		if (str[count] == '\0')
			check = '\0';
		count ++;
	}
	_putchar('\n');
}
