#include "lists.h"

/**
 * print_list - function to print the para list
 *
 * @h: para to be printed
 * Return: h
 */


size_t print_list(const list_t *h)
{
	while (h == NULL)

		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
	{
		printf("%d", h->data);

		h = h->next;
	}

	return (h);
}
