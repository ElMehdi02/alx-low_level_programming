#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list, even if it has a loop
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *temp;
	size_t count = 0;

	if (head == NULL)
	{
		exit(98);
	}

	current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		temp = current;
		current = current->next;

		if (temp < current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}
	return (count);
}
