#include "main.h"

/**
 * swap_int - swaps value of 2 ints
 * @a: first input
 * @b: second input
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
