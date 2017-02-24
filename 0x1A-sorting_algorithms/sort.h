#ifndef _SORT_H
#define _SORT_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Singly linked list node
 *
 * @n: Integer stored in the node
 * @next: Pointer to the next element of the list
 * @prev: Pointer to the previous element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quicksort(int *array, size_t start, size_t end, size_t size);
int partition(int *array, size_t start, size_t end, size_t size);
#endif
