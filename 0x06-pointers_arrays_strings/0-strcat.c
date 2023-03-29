#include "main.h"

/**
 * _strcat - concatenates two strings
 * char \*: 1st input type
 * char \*: 2nd input type
 * @dest: first input sub
 * @src: 2nd input sub
 * Return: char variable
 */

char *_strcat(char *dest, char *src)
{
	int count = 0;
	int count2 = 0;
	char check = '1';

	while (check != '\0')
	{
		if (dest[count] == '\0')
		{
			while (src[count2] != '\0')
			{
				dest[count] = src[count2];
				count2++;
				count++;
			}
			check = '\0';

			if (src[count2] == '\0')
				dest[count] = src[count2];
		}
		else
			count++;
	}
	return (dest);
}
