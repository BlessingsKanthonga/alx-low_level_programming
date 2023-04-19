#include "function_pointers.h"

/**
 * array_iterations - executes a function given as a parameter on each element of an array
 * @array: array of inputs
 * @size: size of array
 * @action: function pointer which executes on each array element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int count;

	for (count = 0; count < (int)size; count++)
		(*action)(array[count]);
}
