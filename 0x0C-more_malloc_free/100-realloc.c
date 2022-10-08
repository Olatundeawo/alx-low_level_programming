#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 *
 * @ptr: a pointer
 * @old_size: size in byte
 * @new_size: new size of the block
 *
 * Return: null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *t;
	char *ptr_copy, *copy;
	unsigned int i;

	if (new_size == old_size)
		return (NULL);

	if (ptr == NULL)
	{
		t = malloc(new_size);

		if (t == NULL)
			return (NULL);

		return (t);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	t = malloc(sizeof(*ptr_copy) * new_size);

	if (t == NULL)
	{
		free(ptr);
		return (NULL);
	}

	copy = t;

	for (i = 0; i < old_size && i < new_size; i++)
		copy[i] = *ptr_copy++;

	free(ptr);
	return (t);
}
