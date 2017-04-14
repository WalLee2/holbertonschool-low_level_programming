#include "search_algos.h"
/**
 *print_me - A funciton that prints the array
 * @array: The array to be printed
 * @left: The beginning of the array
 * @right: The last item in the array
 */
void print_me(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}
/**
 * binary_search - Searching through an array and cutting it in half to search
 * @array: The array to be analyzed
 * @size: The size of the array
 * @value: The value to find using Binary Search
 * Return: The index of the value or -1 if the value does not exist
 */
int binary_search(int *array, size_t size, int value)
{
	size_t new_size, left, right;

	if (array == NULL || size < 1)
		return (-1);
	left = new_size = 0;
	right = size - 1;
	while (left <= right)
	{
		if (array[new_size] == value)
			return (new_size);
		print_me(array, left, right);
		new_size = (left + right) / 2;
		if (value > array[new_size])
			left = new_size + 1;
		else if (value < array[new_size])
			right = new_size;
	}
	return (-1);
}
