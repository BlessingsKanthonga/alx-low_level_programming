#include <stddef.h>
#include "main.h"

/**
 * _strspn - prints length of charactrs in chosen string
 * @s: searched string
 * @accept: searched for characters
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int prefix_len = 0;
	char *p_accept;

	while (*s != '\0')
	{
		p_accept = accept;

		while (*p_accept != '\0')
		{
			if (*s == *p_accept)
			{
				prefix_len++;
				break;
			}
			p_accept++;
		}
		if (*p_accept == '\0')
			break;
		s++;
	}
	return (prefix_len);
}
