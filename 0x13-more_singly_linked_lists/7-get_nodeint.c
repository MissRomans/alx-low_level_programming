#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: pointer to the head of the listsint_t
 * @index: index of the node, starting at 0
 * Return: pointer to the node, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int m = 0;

	while (tmp && m < index)
	{
		tmp = tmp->next;
		m++;
	}
	return (tmp ? tmp : NULL);
}
