#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head pointer to NULL.
 *
 * @head: A pointer to the head of the linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head || !*head)
		return;
	temp = *head;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
