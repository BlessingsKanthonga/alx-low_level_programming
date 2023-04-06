#include "main.h"

/**
 * is_prime_number - checks vor prime number
 * @n: number to be checked
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (calculate_prime(n, 2));
}

int calculate_prime(int n, int x)
{
	if (n == x)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return (calculate_prime(n, x + 1));
}
