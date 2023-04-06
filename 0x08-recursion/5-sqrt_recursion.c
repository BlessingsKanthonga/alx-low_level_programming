#include "main.h"

/**
 * _sqrt_recursion - square roog of a number
 * @n: number to be square rooted
 * Return: square root or -1 if no square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (find_sqrt(n, 1));
}

/**
 * find_sqrt - calculates square root square root for _sqrt_recursion
 * @n: square rooting number
 * @x: starting point for sqiaring
 * Return: square root to _sqrt_recursion or -1
 */

int find_sqrt(int n, int x)
{
	if (n == 0)
		return (0);
	else if ((x * x) == n)
		return (x);
	else if ((x * x) > n)
		return (-1);
	else
		return (find_sqrt(n, (x + 1)));
}
