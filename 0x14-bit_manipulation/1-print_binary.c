#include "main.h"

/**
 * print_binary - prints binary rep of input
 * @n: input #
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = (unsigned long int)1 << (sizeof(unsigned long int) * 8 - 1);
	int start = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			start = 1;
			_putchar('1');
		}
		else if (start)
			_putchar('0');
		mask >>= 1;
	}
	if (!start)
		_putchar('0');
}
