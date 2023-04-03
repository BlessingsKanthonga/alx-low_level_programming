#include "main.h"

/**
 * _strspn - prints length of charactrs in chosen string
 * @s: searched string
 * @accept: searched for characters
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int count2;
	int length = 0;
	int check;
	int done = 0;

	while (done != 1)
	{
		count2 = 0;
		check = 0;

		while (check != 1)
		{
			if (s[count] == accept[count2])
			{
				length++;
				break;
			}
			else if ((s[count] != accept[count2]) && (accept[count2] == '\0'))
			{
				check = 1;
				done = 1;
			}
			count2++;
		}
		count++;
	}
	return (length);
}
