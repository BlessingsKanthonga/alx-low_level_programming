#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints various types of input
 * @format: data types
 * @...: variables
 */

void print_all(const char * const format, ...) 
{
	va_list args;
	char c;
	char *s;
    	int i;
	float f;
	int count = 0;
	const char *p = format;

	while (format[count] != '\0')
		count++;
	va_start(args, format);

	while (*p)
	{
		switch (*p) 
		{
			case 'c':
				{
					c = va_arg(args, int);

					printf("%c", c);
					break;
				}
			case 'i':
				{
					i = va_arg(args, int);

					printf("%d", i);
					break;
				}
			case 'f':
				{
					f = va_arg(args, double);

					printf("%f", f);
					break;
				}
			case 's':
				{
					s = va_arg(args, char *);

					if (s == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", s);
					break;
				}
			default:
				{
					break;
				}
		}
		p++;
		count--;

		if ((count > 0) && ((*p == 'c') || (*p == 's') || (*p == 'f') || (*p == 'i')))
			printf(", ");
	}

	va_end(args);
	printf("\n");
}
