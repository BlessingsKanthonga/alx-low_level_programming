#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print various data typez
 * @format: data types
 * @...: data
 * Return: vojd
 */

void print_all(const char * const format, ...)
{
	int count = 0;
	int counter = 0;
	int counter2 = 0;
	char *str;
	va_list args;

	while (format[counter] != NULL)
	{
		switch (format[counter])
		{
			case 'c':
				count++;
			case 'i':
				count++;
			case 'f':
				count++;
			case 's':
				count++;
			default:
				continue;
		}
		counter++;
	}
	va_start(args, format[count]);

	while (count > 0)
	{
		switch (format[counter2])
		{
			case 'c':
				{
					printf(", %s", va_arg(args, char));
					counter2++;
					break;
				}
			case 'i':
				{
					printf(", %d", va_arg(args, int));
					counter2++;
					break;
				}
			case 'f':
				{
					printf(", %f", va_arg(args, float));
					counter2++;
					break;
				}
			case 's':
				{
					str = va_arg(args, char *);

					if (str == NULL)
					{
						printf("(nil)");
						counter2++;
						break;
					}
					printf("%s, ", str);
					counter2++;
					break;
				}
			default:
				{
					counter2++;
					continue;
				}
		}

	switch (format[counter2])
	{
		case 'c':
			{
				printf("%c", va_arg(args, char));
				break;
			}
		case 'i':
			{
				printf("%d", va_arg(args, int));
				break;
			}
		case 'f':
			{
				print("%f", va_arg(args, float));
				break;
			}
		case 's':
			{
				str = va_arg(args, char *);

				if (str == NULL)
				{
					printf("%s", str);
					break;
				}
				printf("%s", str);
				break;
			}
		default:
			continue;
	}
	va_end(args);
	printf("\n");
}
