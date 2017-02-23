#include "sort.h"
/**
 *bubble_sort - Sorting an array of integers in ascending order by making a
 *bubble sort algorithm.
 *@array: The array of numbers to be sorted.
 *@size: The size of the array to be sorted.
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t swapped, j, temp_size;

	swapped = 1;
	temp_size = size;
	if (array == NULL || size == 0)
		return;
	while (swapped)
	{
		swapped = 0;
		for (j = 0; j < temp_size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		temp_size = j;
	}
}
