#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: of array
 * @cmp: function that does the comparison
 * Return: returns index kf 1st element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if ((array == NULL) || (cmp == NULL))
		exit(98);

	if (size <= 0)
		return (-1);

	for (count = 0; count < size; count++)
	{
		if ((*cmp)(array[count]) != 0)
			return (count);
	}
	return (-1);
}
