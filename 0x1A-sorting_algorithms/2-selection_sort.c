#include "sort.h"
/**
 *selection_sort - C implementation of selection sort
 *@array: The given array to sort
 *@size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, swapped, idx_holder, idx;
	int temp;

	i = idx_holder = 0;
	while (i < size)
	{
		idx = i;
		swapped = 0;
		temp = array[i];
		while (idx < size)
		{
			if (temp > array[idx])
			{
				temp = array[idx];
				idx_holder = idx;
				swapped = 1;
			}
			idx++;
		}
		if (swapped == 1)
		{
			array[idx_holder] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
		i++;
	}
}
