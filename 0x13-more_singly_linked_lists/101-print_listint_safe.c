#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list
 * @head: pointer to the head of the listsint_t
 * Return: if the list is not looped, return 0
 */

size_t looped_listint_len(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *title, *name;

	if (head == NULL || head->next == NULL)
		return (0);

	title = head->next;
	name = (head->next)->next;

	while (name)
	{
		if (title == name)
		{
			title = head;
			while (title != name)
			{
				nodes++;
				title = title->next;
				name = name->next;
			}
			title = title->next;
			while (title != name)
			{
				nodes++;
				title = title->next;
			}
			return (nodes);
		}
		title = title->next;
		name = (name->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: pointer to the head of the listsint_t
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}


