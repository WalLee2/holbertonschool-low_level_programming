#include "hash_tables.h"
/**
 *hash_table_create - Creating a hash table that contains a space
 *for one key value pair
 *@size: the size of the space being mallocd which is of type
 *long unsigned int.
 *Return: Pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *arr_list;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	arr_list = malloc(sizeof(hash_table_t));
	if (arr_list == NULL)
		return (NULL);
	arr_list->array = malloc(size * sizeof(hash_node_t *));
	if (arr_list->array == NULL)
	{
		free(arr_list);
		return (NULL);
	}
	arr_list->size = size;
	for (i = 0; i < arr_list->size; i++)
		arr_list->array[i] = NULL;
	return (arr_list);
}
