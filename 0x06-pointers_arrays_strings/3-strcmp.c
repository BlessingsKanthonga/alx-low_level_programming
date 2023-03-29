#include "main.h"

/**
 * _strcmp - compares two strings
 * char \*: 1st input type
 * char \*: 2nd input type
 * @s1: sub 1
 * @s2: sub 2
 * Return: 0 if equal, -1 if s1 is shorter and 1 if s1 is longer
 */

int _strcmp(char *s1, char *s2)
{
	int count = 0;
	char check = '1';
	int result;
	int count2 = 0;

	while (check != '\0')
	{
		if ((s1[count] != '\0') && (s2[count] != '\0'))
		{
			if (s1[count] == s2[count])
				count2++;
		}
		else if ((s1[count] == '\0') && (s2[count] != '\0'))
		{
			result = -15;
			check = '\0';
		}
		else if ((s1[count] != '\0') && (s2[count] == '\0'))
		{
			result = 15;
			check = '\0';
		}
		else
		{
			result = 0;
			check = '\0';
		}

		count++;
	}

	return (result);
}
