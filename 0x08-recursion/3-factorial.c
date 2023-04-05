#include "main.h"

/**
 * factorial - factorial
 * @n: input
 * Return: factorial answer
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
