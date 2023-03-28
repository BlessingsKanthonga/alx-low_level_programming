#include "main.h"

/**
 * _strcpy - copies the string
 * char \*: input type
 * char \*: second input type
 * @dest: sub for 1st input
 * @src: sub for 2nd input
 * Return: pointer to a char variable
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;
	char check = '1';

	while (check != '\0')
	{
		dest[count] = src[count];
		count++;

		if (src[count] == '\0')
		{
			dest[count] = src[count];
			check = '\0';
		}
	}

	return (dest);
}
