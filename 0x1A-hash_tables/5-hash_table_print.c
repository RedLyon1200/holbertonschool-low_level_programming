#include "hash_tables.h"

/**
 * hash_table_print - function that deletes a hash table.
 * @ht: hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	char *sep = "";
	unsigned long int count = 0;
	hash_node_t *node;

	if (!ht)
		return;

	printf("{");

	for (count = 0; count < ht->size; count++)
	{
		node = ht->array[count];

		while (node)
		{
			printf("%s'%s': '%s'", sep, node->key, node->value);
			sep = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
