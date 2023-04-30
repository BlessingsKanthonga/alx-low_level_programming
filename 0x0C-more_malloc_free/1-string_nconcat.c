#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates strings based on limit n
 * @s1: string
 * @s2: 2nd string
 * @n: limiter
 * Return: pointer to concatenation
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[i] != '\0')
	{
		s1_len++;
		i++;
	}
	if (s2 == NULL)
		s2 = "";
	while (s2[j] != '\0')
	{
		s2_len++;
		j++;
	}
	if (n >= s2_len)
		n = s2_len;
	result = malloc(s1_len + n + 1);

	if (result == NULL)
		return NULL;
	for (i = 0; i < s1_len; i++)
		result[i] = s1[i];
	for (j = 0; j < n; j++)
		result[i+j] = s2[j];
	result[i+j] = '\0';

	return (result);
}
