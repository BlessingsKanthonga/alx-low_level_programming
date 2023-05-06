#include "main.h"

/**
 * _strcmp - compares two strings
 * char \*: 1st input type
 * char \*: 2nd input type
 * @s1: sub 1
 * @s2: sub 2
 * Return: 0 if equal, -1 if s1 is shorter and 1 if s1 is longer
 */

int _strcmp(char *s1, char *s2)
{
        while (*s1 && (*s1 == *s2))
        {
                s1++;
                s2++;
        }

        return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
