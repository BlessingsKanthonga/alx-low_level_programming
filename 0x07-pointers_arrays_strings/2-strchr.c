#include <stddef.h>
#include "main.h"

/**
 * _strchr - returns starting point of a found variable
 * @s: searvbed string
 * @c: character go be searvhed
 * Return: starting point pointer
 */

char *_strchr(char *s, char c)
{
	int count = 0;
	char *d;

	while (1)
	{
		if (s[count] == c)
		{
			d = &s[count];
			break;
		}
		else if (s[count] != c)
		{
			d = NULL;
			count++;
		}
		else if (s[count] == '\0')
		{
			d = &s[count];
			break;
		}
	}
	return (d);
}
