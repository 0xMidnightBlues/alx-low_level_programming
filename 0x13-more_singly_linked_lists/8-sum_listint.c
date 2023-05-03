#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a list.
 * @head: head of the list
 *
 * Return: the sum of all the data of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
