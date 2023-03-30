#include "main.h"

/**
 * leet - encodes a string
 * char \*: input type
 * @n: pointer to string
 * Return: char variable
 */

char *leet(char *n)
{
	char *exempt[] = {"aA", "eE", "oO", "tT", "lL"};
	char *replace[] = {"4", "3", "0", "7", "1"};
	int count;
	int count2;

	for (count = 0; n[count] != '\0'; count++)
	{
		for (count2 = 0; count2 < 5; count2++)
		{
			if ((n[count] == exempt[count2][0]) || (n[count] == exempt[count2][1]))
				n[count] = *replace[count2];
		}
	}
	return (n);
}
