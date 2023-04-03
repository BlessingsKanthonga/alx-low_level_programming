#include "main.h"

/**
 * _memset - replaces value pointed to with cpnstant btye
 * @s: pointer to cnstant variable
 * @b: constant byte
 * @n: number of addresses for constant byte
 * Return: char varibable
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}
