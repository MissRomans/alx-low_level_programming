#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index
 * of a listint_t linked list
 * @head: pointer to the head of the listsint_t
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m;
	listint_t *tmp;
	listint_t *current_node;

	tmp = *head;
	if (*head == NULL)
		return (-1);
	while (m < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		m++;
	}
	if (index == 0)
	{
		current_node = tmp->next;
		free(tmp);
		*head = (*head)->next;
		return (1);
	}
	current_node = tmp->next;
	tmp->next = current_node->next;
	free(current_node);

	return (1);
}
