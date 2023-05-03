#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a list
 * @h: head of the list
 * Return: returns the number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
