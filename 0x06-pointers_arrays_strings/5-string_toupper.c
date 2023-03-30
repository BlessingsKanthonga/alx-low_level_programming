#include "main.h"

/**
 * string_toupper - changes lower case to upper case
 * char \*: input type
 * @n: input sub
 * Return: char variable
 */

char *string_toupper(char *n) {
	int count = 0;

	while (n[count] != '\0')
	{
		if (n[count] >= 'a' && n[count] <= 'z') {
			n[count] -= 32;
	}
	count++;
	}

	return (n);
}
