#include "hash_tables.h"
/**
 *hash_table_print - Printing everything in the Hash Table.
 *@ht: The hash table that is being evaluated.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count;
	hash_node_t *friend;

	count = 0;
	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		friend = ht->array[i];
		while (friend != NULL)
		{
			if (friend->key != NULL)
			{
				if (count > 0)
					printf(", ");
				printf("'%s': '%s'", friend->key,
				       friend->value);
				count++;
			}
			friend = friend->next;
		}
	}
	printf("}\n");
}
