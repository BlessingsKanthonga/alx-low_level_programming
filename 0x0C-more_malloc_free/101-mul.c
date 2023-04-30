#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two integers
 * @argc: count
 * @argv: arguments
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i;
	char *num1;
	char *num2;
	char *result;

	if (argc != 3)
	{
		_puts("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i]; i++)
	{
		if (!_isdigit(num1[i]))
		{
			_puts("Error\n");
			return (98);
		}
	}

	for (i = 0; num2[i]; i++)
	{
		if (!_isdigit(num2[i]))
		{
			_puts("Error\n");
			return (98);
		}
	}
	result = multiply(num1, num2);

	if (result == NULL)
	{
		_puts("Error\n");
		return (98);
	}
	_puts(result);
	_putchar('\n');
	free(result);
	return (0);
}

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check.
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}

/**
 * _strlen - Computes the length of a string.
 * @s: The string to compute the length of.
 * Return: The length of the string.
 */

size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * _puts - Prints a string to standard output.
 * @s: The string to print.
 */

void _puts(const char *s)
{
	while (*s)
		_putchar(*s++);
}

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 * Return: The integer value of the string.
 */

int _atoi(const char *s)
{
	int sign = 1;
	int value = 0;

	while (*s)
	{
		if (*s == '-')
			sign = -1;
		else if (_isdigit(*s))
			value = (value * 10) + (*s - '0');
		else
			break;
		s++;
	}
	return (sign * value);
}

/**
 * multiply - Multiplies two strings of digits.
 * @s1: The first string to multiply.
 * @s2: The second string to multiply.
 * Return: A string containing the result of the multiplication.
 */

char *multiply(const char *s1, const char *s2)
{
	size_t len1 = _strlen(s1);
	size_t len2 = _strlen(s2);
	size_t len = len1 + len2 + 1;
	char *result = malloc(len * sizeof(char));
	size_t i, j;
	int carry;
	int digit1;
	int digit2;
	int product;
	int sum;
	char temp;

	if (result == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		result[i] = '0';
	for (i = 0; i < len1; i++)
	{
		carry = 0;

		for (j = 0; j < len2; j++)
		{
			digit1 = s1[len1 - i - 1] - '0';
			digit2 = s2[len2 - j - 1] - '0';
			product = digit1 * digit2;
			sum = (result[i + j] - '0') + product + carry;
			result[i + j] = (sum % 10) + '0';
			carry = sum / 10;
		}
		if (carry > 0)
			result[i + j] += carry;
	}
	while ((len > 1) && (result[len - 1] == '0'))
		len--;
	result[len] = '\0';
	j = len - 1;

	for (i = 0; i < j; i++, j--)
	{
		temp = result[i];
		result[i] = result[j];
		result[j] = temp;
	}
	return (result);
}
