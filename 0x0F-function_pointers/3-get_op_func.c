#include <string.h>
#include <stdlib.h>
#include <stdio.h>
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
	int i = 0;
	
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s)  == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
