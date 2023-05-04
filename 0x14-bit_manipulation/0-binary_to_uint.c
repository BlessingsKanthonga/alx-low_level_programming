#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary # to unsigned int
 * @b: binary #
 * Return: converted # or 0 if failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;

		if (b[i] == '1')
			num += 1;
		else if (b[i] != '0')
			return (0);
	}
	return (num);
}
