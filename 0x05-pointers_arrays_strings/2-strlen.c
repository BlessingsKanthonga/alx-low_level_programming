#include "main.h"

/**
 * _strlen - returns length of a string
 *char \*: takes pointer of type char as input
 *@s: substitute for input
 *Return: void
 */

int _strlen(char *s)
{
	int count = 0;
	char check = '1';

	while (check != '\0')
	{
		if (s[count] == '\0')
		{
			check = '\0';
			break;
		}
		else
		{
			count++;
		}
	}
	return (count);
}
