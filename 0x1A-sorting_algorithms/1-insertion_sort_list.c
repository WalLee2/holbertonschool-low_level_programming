#include "sort.h"
/**
 *swap - function that swaps two nodes in a linked doubly linked list
 *@list: A double pointer pointing to a doubly linked list
 *@node: A node containing a pointer to prev, next, and an int.
 *Return: The swapped nodes
 */
listint_t *swap(listint_t **list, listint_t *node)
{
        listint_t *next, *aft_next;

        next = node->next;
        aft_next = node->next;
        while (node != NULL && node->n > next->n)
        {
		aft_next = node->next;
                node->next = next->next;
		if (node->next != NULL)
			node->next->prev = node;
                next->prev = node->prev;
		if (next->prev != NULL)
			next->prev->next = next;
                next->next = node;
                node->prev = next;
		node = next->prev;
		while ((*list)->prev != NULL)
                        *list = (*list)->prev;
		print_list(*list);
	}
	return (aft_next);
}
/**
 *insertion_sort_list - C implementation of insertion sort
 *@list - double pointer to a doubly linked list of size 1
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *helper;

	helper = *list;
	if (list == NULL || *list == NULL)
		return;
	while (helper != NULL && helper->next != NULL)
	{
		if (helper->n > helper->next->n)
			swap(list, helper);
		else
			helper = helper->next;
	}
}
