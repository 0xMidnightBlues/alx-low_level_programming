#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning.
 * @head: A pointer to the head of the list.
 * @str: The string to be added to the list.
 *
 * Return: pointer to the new head
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new_head;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_head);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_head->str = dup;
	new_head->len = len;
	new_head->next = *head;

	*head = new_head;

	return (new_head);
}
