#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - prints its opcodes
 * @argc: count
 * @argv: arguments
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	
	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(n);
	
	return (0);
}

/**
 * print_opcodes - prints opcodes
 * @n: argument for main fn
 */

void print_opcodes(int n)
{
	int i;
	unsigned char *p = (unsigned char *)print_opcodes;
	
	for (i = 0; i < n; i++)
		printf("%02x", *p++);
	printf("\n");
}
