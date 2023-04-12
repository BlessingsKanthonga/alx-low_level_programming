#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - opies string
 * @str: string copied
 * Return: NULL if empty or no memory else pointer go copied string
 */

char *_strdup(char *str)
{
	int count = 0;
	int count2;
	char *array;

	if (str == NULL)
		return (NULL);
	while (str[count] != '\0')
		count++;
	array = (char *) malloc(sizeof(char) * (count + 1));

	if (array == NULL)
		return (NULL);
	for (count2 = 0; count2 <= count; count2++)
		array[count2] = str[count2];
	return (array);
}
