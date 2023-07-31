#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: pointer to pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if successful, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *new_node;
	unsigned int i;

	if (!*head)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1 && temp->next; i++)
		temp = temp->next;
	if (!temp->next)
	{
		return (-1);
	}
	new_node = temp->next->next;
	free(temp->next);
	temp->next = new_node;
	return (1);
}
