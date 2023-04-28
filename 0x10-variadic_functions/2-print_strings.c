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

	if (n != 0)
	{
		va_start(args, n);

		for (count = 0; count < n; count++)
		{
			c = va_arg(args, char *);

			if (c == NULL)
				printf("(nil)");
			else
				printf("%s", c);
			if ((count < (n - 1)) && (separator != NULL))
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
