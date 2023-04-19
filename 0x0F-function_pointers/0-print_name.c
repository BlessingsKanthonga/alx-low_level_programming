#include "function_pointers.h"

/**
 * print_name - prints name using fn pointer
 * @name: name to be printed
 * @f: function pointer to do the printing
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
