#include "hash_tables.h"
/**
 *hash_table_create - Creating a hash table that contain the key value pairs
 *@size: the size of the space being mallocd
 *Return: The new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *arr_list;

	arr_list = malloc(sizeof(hash_table_t));
	arr_list->array = malloc(size * sizeof(hash_node_t *));
	if (arr_list == NULL)
		return (NULL);
	arr_list->size = size;
	return (arr_list);
}
