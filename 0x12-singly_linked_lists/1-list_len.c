#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - Find the length of a list
 * @h: linked list_t list
 * Return: number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
