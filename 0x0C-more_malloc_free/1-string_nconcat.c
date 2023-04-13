#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: range of chars from 2nd string
 * Return: pointer to string or NULL if not successful
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char * ptr;
	unsigned int length = n;
	unsigned int count = 0;
	unsigned int count2 = 0;
	unsigned int count3 = 0;
	unsigned int length2;
	unsigned int counter;
	unsigned int counter2;

	while (s1[count] != '\0')
	{
		length++;
		count++;
	}
	if (s2 == NULL)
		s2 = "";
	while (s2[count2] != '\0')
		count2++;
	ptr = (char *) malloc(sizeof(char) * length);

	if (ptr == NULL)
		return (NULL);
	for (counter = 0; counter < count; counter++)
	{
		ptr[counter] = s1[counter];
	}
	if ((count2 + 1) < n)
		length2 = (count2 + 1);
	else
		length2 = n;
	for (counter2 = counter; counter2 < (length2 + counter); counter2++)
	{
		ptr[counter2] = s2[count3];
		count3++;
	}
	ptr[counter2] = '\0';
	return (ptr);
}
