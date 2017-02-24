#include "sort.h"
/**
 *partition - all of the numbers to the right will be bigger than the partition
 *everything left of it will be smaller than the partition
 *@array: array to be sorted
 *@start: The start of the index of array
 *@end: The end of the index of the array
 *@size: The size of the array
 *Return: The index stored in the variable i
 */
int partition(int *array, size_t start, size_t end, size_t size)
{
	int pivot, temp;
	long i, j;

	pivot = array[end];
	i = start - 1;
	j = end + 1;
	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);
		do {
			j--;
		} while (array[j] > pivot);
		if (i < j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
		else
			return (i);
	}
}
/**
 *quicksort - Implementing a modified version of the Hoare implementation
 *and starting the pivot at the end.
 *@array: The numbers to be evaluated and sorted
 *@start: The very first index of the array
 *@end: The very last index of the array
 *@size: The size of the array
 */
void quicksort(int *array, size_t start, size_t end, size_t size)
{
	long p;

	if (start < end)
	{
		p = partition(array, start, end, size);
		quicksort(array, start, p - 1, size);
		quicksort(array, p, end, size);
	}
}
/**
 *quick_sort - Wrapper function that calls the quicksort
 *@array: The array to be sorted
 *@size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	long start, end;

	if (*array == NULL || size == 0)
		return;
	start = 0;
	end = size - 1;
	quicksort(array, start, end, size);
}
