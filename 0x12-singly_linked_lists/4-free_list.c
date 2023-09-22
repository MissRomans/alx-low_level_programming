#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: original linked list
 */

void free_list(list_t *head)
{
	list_t *current_nodes;

	while ((current_nodes = head) != NULL)
	{
		head = head->next;
		free(current_nodes->str);
		free(current_nodes);
	}
}
