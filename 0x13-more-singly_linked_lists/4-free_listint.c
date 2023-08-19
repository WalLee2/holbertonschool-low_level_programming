#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (tmp)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
