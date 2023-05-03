#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list.
 * @head: A pointer to the address of the list.
 *
 * Return: the head node’s data (n) or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
