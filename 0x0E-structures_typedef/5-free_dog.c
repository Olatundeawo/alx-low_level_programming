#include "dog.h"

/**
 * free_dog - free memory
 *
 * @d: structure
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);
	free(d->owner);
	free(d->name);
	free(d);
}
