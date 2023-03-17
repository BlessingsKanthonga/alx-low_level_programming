#include <stdio.h>

/**
 * main - print alphabet without q and e
 * No parameters for function main
 * returns 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if ((alphabet == 'q') || (alphabet == 'e'))
		{
		}
		else
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
