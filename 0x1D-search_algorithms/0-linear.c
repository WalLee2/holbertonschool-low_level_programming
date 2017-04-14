#include "search_algos.h"
/**
 *linear_search - Searches for a value in an array of integers
 *@array: pointer to the first element in the array
 *@size: the size of the array
 *@value: the value to look for
 *Return: The index of the value or -1 if it can't be found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;
	if (array == NULL || size < 1)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
