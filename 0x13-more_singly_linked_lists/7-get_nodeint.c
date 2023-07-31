#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at
 * the specified index in a linked list.
 *
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to retrieve.
 *
 * Return: A pointer to the node at the specified index
 * or NULL if index is out of range.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index-- && head)
		head = head->next;
	return (head);
}
