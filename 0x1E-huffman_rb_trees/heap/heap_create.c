#include "heap.h"
/**
 *heap_create - Creates a heap data structure.
 *@data_cmp: a pointer that represents a function
 *Return: The struct of heap_t
 */
heap_t *heap_create(int (*data_cmp)(void *, void *))
{
	heap_t *storage;

	storage = malloc(sizeof(heap_t));
	if (storage == NULL)
		return (NULL);
	storage->size = 0;
	storage->root = NULL;
	if (data_cmp == NULL)
		return (NULL);
	storage->data_cmp = data_cmp;
	return (storage);
}
