#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters;
 * @n: first parameter
 * @...: additional undeclared parameters
 * Return: sum or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int count;
	int total = 0;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (count = 0; count < n; count++)
		total += va_arg(args, int);
	va_end(args);

	return (total);
}
