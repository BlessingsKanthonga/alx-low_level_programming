#include <stdlib.h>
#include "main.h"

/**
 * strtow - splits string into words
 * @str: string to be split
 * Return: pointer go array of strings or NULL for failure
 */

char **strtow(char *str)
{
	int words = 0;
	char *ptr = str;
	char **result;
	int index = 0;
	int length;
	char *start;
	char *w;
	int count;

	if ((str == NULL) || (*str == '\0'))
		return (NULL);
	while (*ptr != '\0')
	{
		while (*ptr == ' ')
			ptr++;
		if (*ptr != '\0')
		{
			words++;
			while ((*ptr != ' ') && (*ptr != '\0'))
				ptr++;
		}
	}
	result = (char **) malloc((words + 1) * sizeof(char *));
	
	if (result == NULL)
		return (NULL);
	ptr = str;
	
	while (*ptr != '\0')
	{
		while (*ptr == ' ')
			ptr++;
		if (*ptr != '\0')
		{
			start = ptr;

		       	while ((*ptr != ' ') && (*ptr != '\0'))
				ptr++;
			length = ptr - start;
			w = (char *) malloc((length + 1) * sizeof(char));
			if (w == NULL)
			{
				for (count = 0; count < index; count++)
					free(result[count]);
				free(result);
				return (NULL);
			}
			for (count = 0; count < length; count++)
				w[count] = start[count];
			w[count] = '\0';
			result[index] = w;
			index++;
		}
	}
	result[words] = NULL;
	return (result);
}
