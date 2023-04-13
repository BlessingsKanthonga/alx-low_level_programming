#include <stdlib.h>

/**
 * array_range - allocates memory to array of numbers
 * @min: lowest number
 * @max: highest number
 * Return: pointer to array or NULL if malloc fails or min > max
 */

int *array_range(int min, int max)
{
	int *ptr;
	int count;
	int range;

	if (min > max)
		return (NULL);
	range = (max - min) + 1;
	ptr = (int *) malloc(sizeof(int) * range);

	if (ptr == NULL)
		return (NULL);
	for (count = 0; count < range; count++)
	{
		ptr[count] = min;
		min++;
	}
	return (ptr);
}
