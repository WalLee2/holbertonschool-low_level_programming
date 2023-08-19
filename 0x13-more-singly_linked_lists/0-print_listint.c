#include "lists.h"

/**
 * print_listint - Function to print the integer within the linked list
 * @h: Linked list to print integer
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (i);
}
