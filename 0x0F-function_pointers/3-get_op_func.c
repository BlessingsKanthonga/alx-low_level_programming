#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - chooses which operation to run
 * @s: operation symbol
 * Return: pointer to chosen function
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (ops[i].op == s)
			return (ops[i].f);
	}
	return (NULL);
}
