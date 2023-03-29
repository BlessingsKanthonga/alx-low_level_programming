#include "main.h"

/**
 * _strcat - concatenates two strings
 * char \*: 1st input type
 * char \*: 2nd input type
 * @dest: first input sub
 * @src: 2nd input sub
 * Return: char variable
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;
	char check = '1';

	while (check != '\0')
	{
		if (src[count] != '\0')
		{
			while ((src[count] != '\0') && (count < n))
			{
				dest[count] = src[count];
				count++;
			}
			check = '\0';

			while (count < n)
			{
				dest[count] = src[count];
				count++;
			}
		}
		else
			count++;
	}
	return (dest);
}
