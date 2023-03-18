#include <stdio.h>

/**
 * main - print alphabet in reverse
 * void: no parameters
 * Return: 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
