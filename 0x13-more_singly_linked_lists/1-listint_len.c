#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: a pointer to the head of the linked list
 * Return: the number of elements in the linked list
 */

soze_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
