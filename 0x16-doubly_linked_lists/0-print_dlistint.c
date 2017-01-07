#include "lists.h"
/**
 *print_dlistint - a function that prints all elements of a doubly linked list
 *@h: a constant variable that has the head pointer
 *Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
