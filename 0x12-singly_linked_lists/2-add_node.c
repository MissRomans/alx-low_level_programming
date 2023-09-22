#include "lists.h"
#include <stdio.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @str: string to be duplicated
 * @head: original linked list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int m, length = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (m = 0; str[m] != '\0'; m++)
		length++;

	newnode->len = length;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
