#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: pointer to the head of the listsint_t
 * Return: 0, if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int m;

	if (head == NULL || *head == NULL)
		return (0);
	m = (*head)->n;
	tmp = (*head)->next;
	free(tmp);
	*head = tmp;

	return (m);
}
