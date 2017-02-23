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
	size_t swapped, i, j , temp_size;

	temp_size = size;
	swapped = 1;
	if (array == NULL || size == 0)
		return;
	while (swapped)
	{
		swapped = 0;
		for (i = 0, j = 1; j < temp_size; i++, j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				swapped = 1;
			}
			print_array(array, size);
			temp_size--;
		}
	}
}
