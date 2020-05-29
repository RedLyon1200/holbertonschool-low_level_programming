#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table
 * @key: key :v
 * @value: idx value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node = 0, *idx_node = 0;

	if (!strlen(key) || !ht)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	idx_node = (ht->array)[idx];

	if (idx_node && !strcmp(idx_node->key, key))
	{
		free(idx_node->value);
		idx_node->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	(ht->array)[idx] = new_node;
	new_node->next = idx_node;
	return (1);
}
