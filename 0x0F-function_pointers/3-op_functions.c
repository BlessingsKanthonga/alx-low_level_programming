#include "3-calc.h"

/**
 * op_add - adds 2 numbers
 * @a: first operand
 * @b: 2nd operand
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtrats
 * @a: 1st operand
 * @b: 2nd operand
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies
 * @a: 1st operand
 * @b: 2nd operand
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides
 * @a: dividend
 * @b: divisor
 * Return: quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds modullus
 * @a: dividend
 * @b: divisor
 * Return: modullus
 */

int op_mod(int a, int b)
{
	return (a % b);
}
