#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints its parameter
 * char c: it takes one parameter
 * Return: returns the variable taken as parameter
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
