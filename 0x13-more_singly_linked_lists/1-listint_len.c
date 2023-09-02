#include "lists.h"

/**
 * listint_len - Returns number of elements in a listint_t list.
 * @h: Struct to go through
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
