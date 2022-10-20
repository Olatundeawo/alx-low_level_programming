#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct Node - data structure
 *
 * @data: data
 * @next: address
 *
 */

struct Node
{
	int data;
	struct Node *next;
};

size_t print_list(const list_t *h);


#endif
