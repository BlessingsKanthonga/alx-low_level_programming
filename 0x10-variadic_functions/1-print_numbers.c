#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers and separator
 * @separator: number separator
 * @n: number of undeclared variables
 * @...: undeclared numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list args;
	
	if (n != 0)
	{
		va_start(args, n);

		printf("%d", va_arg(args, int));
		for (count = 1; count < n; count++)
		{
			if (separator == NULL)
				printf("%d", va_arg(args, int));
			else
				printf("%s%d", separator, va_arg(args, int));
		}
		va_end(args);
	}
	printf("\n");
}
