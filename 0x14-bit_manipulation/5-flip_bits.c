#include "main.h"

/**
 * flip_bits - counts bits to be flippec 4 numbers to equal
 * @n: 1st #
 * @m: 2nd #
 * Return: #of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor != 0)
	{
		if (xor & 1)
			count++;
		xor >>= 1;
	}
	return (count);
}
