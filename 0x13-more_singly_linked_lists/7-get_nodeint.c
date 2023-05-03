#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of
 * a listint_t linked list
 * @head: head of the list
 * @index: The index of the node starting at 0.
 *
 * Return: the node or 0 if doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
