#include "lists.h"

/**
 * print_list - function to print the para list
 *
 * @h: para to be printed
 * Return: elem
 */


size_t print_list(const list_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else

		printf("[%d] %s\n", h->data, h->str);

		elem++;
		h = h->next;
	}

	return (elem);
}
