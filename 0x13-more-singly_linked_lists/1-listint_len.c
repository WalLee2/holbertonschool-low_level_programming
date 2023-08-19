#include "lists.h"

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	int i;

	tmp = h;
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	return (i);
}
