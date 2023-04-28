#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * str_concat - concats 2 strings
 * @s1: string1
 * @s2: string 2
 * Return: strng or null for failure
 */

char *str_concat(char *s1, char *s2)
{
	int count = 0;
	int counter;
	int counter2;
	int count2 = 0;
	int count3 = 0;
	int length = 0;
	char *con;

	if ((s1 == NULL) && (s2 == NULL))
	{
		s1 = "";
		s2 = "";
	}
	else if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	while (s1[count] != '\0')
	{
		count++;
		length++;
	}
	while (s2[count2] != '\0')
	{
		count2++;
		length++;
	}
	con = (char *) malloc(sizeof(char) * (length + 1));

	if (con == NULL)
		return (NULL);
	for (counter = 0; counter < count; counter++)
		con[counter] = s1[counter];
	for (counter2 = counter; counter2 < length; counter2++)
	{
		con[counter2] = s2[count3];
		count3++;
	}
	con[length] = '\0';
	return (con);
}
