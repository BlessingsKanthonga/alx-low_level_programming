#include <stdio.h>

/**
 * main - print possible different combinations of three digits
 * void: no parameters
 * Return: 0
 */

int main(void)
{
	int number = 0;
	int number2 = 1;
	int number3 = 2;
	int counter2 = 1;
	int counter3 = 2;
	int count2 = 1;
	int count3 = 2;

	while (number < 8)
	{
		while (number2 < 9)
		{
			while (number3 < 10)
			{
				putchar('0' + number);
				putchar('0' + number2);
				putchar('0' + number3);
				if ((number == 7) && (number2 == 8) && (number3 == 9))
				{
					break;
				}
				putchar(',');
				putchar(' ');
				number3++;
			}
			counter3++;
			number3 = counter3;
			number2++;
		}
		if ((number2 > 8) && (number3 > 9))
		{
			count2++;
			count3++;
			counter2 = count2;
			counter3 = count3;
			number2 = counter2;
			number3 = counter3;
		}
		else
		{
			counter2++;
			number2 = counter2;
		}
		number++;
	}
	putchar('\n');
	return (0);
}
