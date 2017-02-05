#include "hash_tables.h"
/**
 *hash_table_delete - Deleting and properly
 *freeing all memory of the hash table.
 *@ht: The hash table to be freed.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *friend, *free_kv;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		friend = ht->array[i];
		while (friend != NULL)
		{
			free_kv = friend;
			friend = friend->next;
			free(free_kv->key);
			free(free_kv->value);
			free(free_kv);
		}
	}
	free(ht->array);
	free(ht);
}
