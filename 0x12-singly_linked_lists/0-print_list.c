#include "lists.h"

/**
 * print_list - function to print the para list
 *
 * @h: para to be printed
 * Return: elem
 */


size_t print_list(const list_t *h)
{
	register int len = 0;

	while (h)
	{
		if (!(h->str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		len++;
	}
	return (len);
}
