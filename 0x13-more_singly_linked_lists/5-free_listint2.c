#include "lists.h"

/**
 * free_listint2 - Frees a list then sets the head to NULL
 * @head: A pointer to the head of list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
