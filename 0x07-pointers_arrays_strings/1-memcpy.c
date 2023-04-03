#include "main.h"

/**
 * _memcpy - copies rom one mem area to another
 * @dest: destination
 * @src: source
 * @n: size of vopied bytes
 * Return: copied string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}

	return (dest);
}
