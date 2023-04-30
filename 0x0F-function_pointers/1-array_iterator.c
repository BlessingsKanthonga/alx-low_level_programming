#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a funtion given as parameter
 * @array: array of inputs
 * @size: size of array
 * @action: function pointer which executes on each array element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int count;

	if ((array == NULL) || (action == NULL))
		exit(98);

	for (count = 0; count < (int)size; count++)
		(*action)(array[count]);
}
