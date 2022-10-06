#include "main.h"

/**
 * malloc_checked - allocate memory
 *
 * @b: int
 *
 * Return: null
 */

void *malloc_checked(unsigned int b)
{
	int *s

		s = malloc(b);
		if (s != b)
			exit (98);

		return (s);
	
}
