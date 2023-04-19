#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: of array
 * @cmp: function that does the comparison
 */

/**
 * cmp - fn that compares values to find integer
 * Return: index of integer if found, else -1 if not found or size < 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size <= 0)
		return (-1);

	for (count = 0; count < size; count++)
	{
		if ((*cmp)(array[count]) != 0)
			return (count);
	}
	return (-1);
}
