#include "lists.h"

/**
 * pop_listint - Removes the first node from a linked list
 * and returns its integer value.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return: The integer value of the first node on success, or 0 on failure.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *new_head;

	if (!*head)
		return (0);
	new_head = *head;
	n = new_head->n;
	*head = new_head->next;
	free(new_head);
	return (n);
}
