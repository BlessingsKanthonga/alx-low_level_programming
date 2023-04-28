#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates arguments
 * @ac: count of arguments
 * @av: pointer to argumens
 * Return: pointer to new string or NULL if failure
 */

char *argstostr(int ac, char **av)
{
	int length = 0;
	int i;
	int set = 0;
	char *list;
	char *result;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		list = av[i];
		while (*list != '\0')
		{
			length++;
			list++;
		}
		length++;
	}
	result = (char *) malloc(length * sizeof(char));

	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		list = av[i];
        	while (*list != '\0')
		{
			result[set++] = *list++;
		}
		result[set++] = '\n';
		}
	result[set - 1] = '\n';
	return (result);
}
