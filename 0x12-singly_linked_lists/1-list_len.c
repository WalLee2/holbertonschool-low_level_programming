#include "lists.h"

/**
 * list_len - Return the number of nodes in a linked list
 * @h: Linked list to evaluate
 * Return: The length of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t n;
	const list_t *tmp;

	tmp = h;
	for (n = 0; tmp != NULL; n++)
	{
		tmp = tmp->next;
	}
	return (n);
}
