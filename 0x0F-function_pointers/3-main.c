#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - calls operators  through fn get_op_func
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success else exit(98) for wrong number of inputs, exit(99) for wrong operator or exit(100) for devision by 0
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	char *c;
	char *s;
	int (*get_func)(int, int);

	if ((argc < 4) || (argc > 4))
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = argv[2];
	
	if ((*c == '+') || (*c == '-') || (*c == '*') || (*c == '/') || (*c == '%'))
		s = c;
	else
	{
		printf("Error\n");
		exit(99);
	}

	if ((b == 0) && ((*c == '/') || (*c == '%')))
	{
		printf("Error\n");
		exit(100);
	}

	get_func = *get_op_func(s);
	printf("%d\n", get_func(a, b));

	return (0);
}
