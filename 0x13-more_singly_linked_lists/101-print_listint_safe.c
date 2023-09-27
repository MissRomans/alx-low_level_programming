#include "lists.h"
#include <stdio.h>

/**
 * Prints a listint_t linked list
 * @head: pointer to the head of the listsint_t
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const_listint_t *tmp, *name, *new_node;

	tmp = NULL;
	while (head != NULL)
	{
		name = head;

		while (name != tmp)
		{
			if (name == tmp->next)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (nodes);
			}
			name = name->next;
		}
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
		nodes++;
	}
	return (nodes);
}
