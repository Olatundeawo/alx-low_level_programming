#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 *
 * @b: int
 *
 * Return: null
 */

void *malloc_checked(unsigned int b)
{
	int *s;

		s = malloc(b);
		if (!s)
		{
			exit(98);
		}
		return (s);
}
