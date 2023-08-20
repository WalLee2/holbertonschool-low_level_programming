#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	tmp = *head;
	for (i = 0; tmp->next && i < (idx - 1); i++)
		tmp = tmp->next;

	if (!(tmp->next) && (i != idx - 1))
		return (NULL);
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
