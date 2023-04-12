#include <stdlib.h>

/**
 * alloc_grid - 2d arfay sgoring
 * @width: width
 * @height: height
 * Return: poi ter go brid or null
 */

int **alloc_grid(int width, int height)
{
	int count;
	int count2;
	int count3;
	int **array;

	if ((height == 0) || (width == 0))
		return (NULL);
	if (( height < 0) || (width < 0))
		return (NULL);
	array = (int **) malloc(sizeof(int) * height);

	if (array == NULL)
		return (NULL);
	for (count = 0; count < height; count++)
		array[count] = (int *) malloc(sizeof(int) * width);
	for (count2 = 0; count2 < height; count2++)
	{
		for (count3 = 0; count3 < width; count3++)
			array[count2][count3] = 0;
	}
	return (array);
}
