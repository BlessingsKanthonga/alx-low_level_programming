#include "main.h"

/**
 * clear_bit - sets index bit to 0
 * @n: number
 * @index: position of bit to be set in n
 * Return: 1 if success or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index < sizeof(unsigned long int) * 8)
	{
		mask = ~(1 << index);
		*n &= mask;

		return (1);
	}

	return (-1);
}
