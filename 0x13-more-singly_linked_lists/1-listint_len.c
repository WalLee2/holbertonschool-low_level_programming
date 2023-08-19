#include "lists.h"
/**
 * listint_len - Return the number of nodes of a linked list
 * @h: Start of linked list
 * Return: Length of a linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	int i;

	tmp = h;
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	return (i);
}
