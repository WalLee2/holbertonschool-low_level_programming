#include "hash_tables.h"
/**
 *hash_table_get - retrieving a value associated with a key.
 *@ht: Taking in the hash table.
 *@key: Taking in a character string.
 *Return: The key if found. NULL otherwise.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx, hash_val;

	hash_val = hash_djb2((unsigned char *)key);
	idx = hash_val % ht->size;
	if (ht == NULL)
		return (NULL);
	if (ht->array[idx] != NULL)
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
			return (ht->array[idx]->value);
	}
}
