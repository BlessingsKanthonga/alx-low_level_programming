#include <stdio.h>
#include "main.h"

/**
 * print_array - prints some array elements
 * int *: first input is of type int pointer
 * int: second input is of type int
 * @a: sub for first input (array)
 * @n: sub for second input (Size)
 */

void print_array(int *a, int n)
{
	int counter;

	if (n < 0)
		n *= -1;

	for (counter = 0; counter < n; counter++)
	{
		if (a[counter] == '\0')
			break;
		if (counter != (n - 1))
		{
			printf("%d, ", a[counter]);
		}
		else
			printf("%d\n", a[counter]);
	}
}
