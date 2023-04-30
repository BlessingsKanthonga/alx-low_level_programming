#include <stdlib.h>
#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome recursively.
 * @s: The string to check.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (1);
	len = 1 + is_palindrome(s + 1);

	if (len <= 2)
		return (1);
	if (*s == *(s + len - 1))
		return ((is_palindrome(s + 1)) && (is_palindrome(s + len - 2)));
	return (0);
}
