#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - printz rexult of calculation
 * @argc: arguments count
 * @argv: arguments
 * Return: 0 if success else prints Error and exits
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	char *c;

	if ((argv[2][1] != '\0') || (argc != 4))
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = argv[2];

	if ((b == 0) && ((*c == '/') || (*c == '%')))
	{
		printf("Error\n");
		exit(100);
	}

	if ((*c == '+') || (*c == '-') || (*c == '/') || (*c == '%') || (*c == '*'))
		printf("%d\n", (*get_op_func(argv[2]))(a, b));
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
