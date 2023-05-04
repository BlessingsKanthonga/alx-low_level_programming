#include "main.h"

/**
 * get_bit - prints bit at index
 * @n: input #
 * @index: of bit to get
 * Return: bit value or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		return ((n >> index) & 1);
	}
	return (-1);
}
