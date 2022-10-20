#include "lists.h"

/**
 * list_len -  return the number of element
 *
 * @h: the element
 *
 * Return: elem
 */

size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h->data;
	}
	return (elem);
}
