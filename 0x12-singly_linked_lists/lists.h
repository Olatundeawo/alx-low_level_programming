#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct Node - data structure
 *
 * @data: data
 * @next: address
 * @str: character
 */

typedef struct list_s
{
	char *str;
	unsigned int data;
	struct Node *next;
} list_t;

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

#endif
