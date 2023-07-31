#include "lists.h"

/**
 *listint_len - Returns the number of elements in a linked list.
 *@h: A pointer to the head of the linked list.
 *Return: The number of elements in the linked list.
 */

size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
