#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Execute callback printing contents
 * of array in different ways
 * @array: Array contents to print
 * @size: Size of the array
 * @action: Function pointer to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
