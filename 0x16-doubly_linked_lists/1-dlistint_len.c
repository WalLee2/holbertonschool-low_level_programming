#include "lists.h"
/**
 *dlistint_len - function that keeps track of the number of nodes it traversed
 *@h: a variable that holds reference to the head
 *Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
