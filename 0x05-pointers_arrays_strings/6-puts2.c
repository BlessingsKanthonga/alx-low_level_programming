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
		if (str[count] != '\0')
			_putchar(str[count]);
		else
			check = '\0';
		count += 2;
	}
	_putchar('\n');
}
