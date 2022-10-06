#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - unction that allocates memory for an array
 *
 * @nmemb: array
 * @size: size
 *
 * Return: null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memb;
	char *ptr;
	unsigned int i;


	if (nmemb == 0 || size == 0)
		return (NULL);

	memb = malloc(nmemb * size);

	if (memb == NULL)

	return (NULL);

	ptr = memb;

	for (i = 0; i < (size * nmemb); i++)

		ptr[i] = '\0';

	return (memb);
}
