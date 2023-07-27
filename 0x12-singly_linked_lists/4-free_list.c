#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 *
 * Description: this function takes a pointer to the head of a list and frees
 * all the nodes in the list. The memory occupied by each node is deallocated
 * using the free function. The function does not return a value.
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
