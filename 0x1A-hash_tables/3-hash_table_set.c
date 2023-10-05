#include "hash_tables.h"

/**
 * hash_table_set - adds an elemet to the hash table
 *
 * @ht: hash table to add or update the key/value to
 * @key: key to add to the hash table
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_table_t *new;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
		if (value_copy == NULL)
			return (0);

		index = key_index((const unsigned char *)key, ht->size);
		for (i = index; ht->array[i]; i++)
