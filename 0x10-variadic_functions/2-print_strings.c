#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings and separator
 * @separator: number separator
 * @n: number of undeclared variables
 * @...: undeclared strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list args;
	char *c;
	va_start(args, n);
	c = va_arg(args, char*);

	printf("%s", c);
	for (count = 1; count < n; count++)
	{
		if (separator == NULL)
		{
			if (c == NULL)
				printf("(nil)");
			else
				printf("%s", va_arg(args, char *));
		}
		else
		{
			if (c == NULL)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, va_arg(args, char *));
		}
	}
	printf("\n");
	va_end(args);
}
