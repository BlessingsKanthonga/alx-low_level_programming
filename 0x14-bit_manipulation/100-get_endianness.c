#include "main.h"

/**
 * get_endianness - gets endianness of system
 * Return: 1 for little and 0 for big endian
 */

int get_endianness(void)
{
	int num = 1;
	char *p = (char *)&num;

	return (*p == 1);
}
