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

		printf("[%i] %s\n", h->len, h->str);


		h = h->next;
		elem++;
	}

	return (elem);
}
