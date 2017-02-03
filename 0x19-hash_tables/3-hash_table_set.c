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
	unsigned long int idx, hash_val, val_chk;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	hash_val = hash_djb2((unsigned char *)key);
	idx = hash_val % ht->size;
	if (ht->array[idx] == NULL)
	{
		new->key = (char *)key;
		new->value = (char *)value;
		new->next = NULL;
		ht->array[idx] = new;
	}
	else
	{
		val_chk = collision_chk(ht, idx, (char *)key, (char *)value);
		if (val_chk == 0)
			return (0);
	}
	return (1);
}
/**
 *collision_chk - Checking if a key exists, if it does change the value
 *if not, create the node with the new key and value at the top of the list
 *@ht: Hash table that is being evaluated
 *@idx: The current idx in the array.
 *@k: The key of the hash table.
 *@val: The value associated with the key.
 *Return: 0 on failure, 1 on success.
 */
int collision_chk(hash_table_t *ht, unsigned long int idx, char *k, char *val)
{
	hash_node_t *friend, *new_n;

	friend = ht->array[idx];
	while (friend != NULL)
	{
		if (strcmp(friend->key, k) == 0)
		{
			ht->array[idx]->value = val;
			return (1);
		}
		friend = friend->next;
	}
	new_n = malloc(sizeof(hash_node_t));
	if (new_n == NULL)
		return (0);
	new_n->key = k;
	new_n->value = val;
	new_n->next = ht->array[idx];
	ht->array[idx] = new_n;
	return (1);
}
