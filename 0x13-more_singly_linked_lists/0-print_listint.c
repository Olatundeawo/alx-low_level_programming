#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: input value
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
