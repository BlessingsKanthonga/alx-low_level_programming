#include <stdio.h>
#include <stdlib.h>

/**
 * first - runs before main fn
 */

void first(void) __attribute__((constructor));
void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}