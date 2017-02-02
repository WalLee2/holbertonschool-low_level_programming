#include "hash_tables.h"
/**
 *hash_table_set - Adding an element to the hash table
 *@ht: The hash table that's being adjusted.
 *@key: taking taking in a string value.
 *@value: the value to be stored once the proper key is found.
 *Return: 0 on fail and 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int idx, hash_val, i;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	hash_val = hash_djb2((unsigned char *)key);
	idx = hash_val % ht->size;
	for (i = 0; i <= ht->size; i++)
	{
		if (ht->array[idx] == NULL)
		{
			new->key = (char *)key;
			new->value = (char *)value;
			new->next = NULL;
			ht->array[idx] = new;
		}
		else if (strcmp(ht->array[idx]->key, key) == 0)
		{
			new->key = (char *)key;
			new->value = (char *)value;
			new->next = ht->array[idx];
			ht->array[idx] = new;
		}
	}
	return (1);
}
