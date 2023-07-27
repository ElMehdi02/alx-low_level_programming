#include "lists.h"

/**
 * list_len - computes the number of nodes in a list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
