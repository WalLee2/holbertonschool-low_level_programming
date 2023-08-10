#include "function_pointers.h"

/**
 * int_index - search for an integer given comparison function pointer
 * @array: Array to search
 * @size: Size of the array
 * @cmp: Function pointer to comparison functions
 * Return: Index of array if found, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
