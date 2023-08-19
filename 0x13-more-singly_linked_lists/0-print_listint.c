#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function to print the integer within the linked list
 * @h: Linked list to traverse
 * Return: Total number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;
	const listint_t *tmp;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->next;
	}
	return (i);
}
