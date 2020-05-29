#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int count = 0;
	hash_node_t *del_node, *tmp;

	if (!ht)
		return;

	for (count = 0; count < ht->size; count++)
	{
		if (ht->array[count])
		{
			del_node = ht->array[count];

			while (del_node)
			{
				tmp = del_node->next;
				if (del_node->value)
					free(del_node->value);
				if (del_node->key)
					free(del_node->key);
				free(del_node);
				del_node = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
