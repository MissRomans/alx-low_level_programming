#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of the listsint_t
 * Return: 0, if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int m = 0;

	while (tmp)
	{
		m += tmp->n;
		tmp = tmp->next;
	}
	return (m);
}

