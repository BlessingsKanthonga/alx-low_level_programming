#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates dynamic aray
 * @size: array size
 * @c: initializer
 * Return: null if empty else array pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int count;

	if (size == 0)
		return (NULL);
	array = (char *) malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (count = 0; count < size; count++)
		array[count] = c;
	array[size] = '\0';

	return (array);
}
