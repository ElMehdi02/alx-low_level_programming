#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to pointer to the head of the list
 * Return: pointer to the new head of the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node;
	listint_t *next_node;

	prev_node = NULL;
	next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;
	return (*head);
}
