#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @str: string to be duplicated
 * @head: original linked list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *current_node;
	unsigned int m, length = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (m = 0; str[m] != '\0'; m++)
		length++;
	newnode->len = length;
	newnode->next = NULL;
	current_node = *head;

	if (current_node == NULL)
		*head = newnode;
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = newnode;
	}
	return (*head);
}
