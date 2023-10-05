#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: hash table to look into
 * @key: key to look for
 * Return: value associated with the element, or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, size;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	size = ht->size;
	index = key_index((unsigned char *)key, size);

	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) ==  0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
