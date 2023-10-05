#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table to be deleted
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, index = 0;
	hash_node_t *current, *tmp;

	if (!ht)
		return;
	size = ht->size;

	while (index < size)
	{
		current = ht->array[index];
		while (current)
		{
			tmp = current;
			current = current->next;
			free(tmp->value);
			free(tmp);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
