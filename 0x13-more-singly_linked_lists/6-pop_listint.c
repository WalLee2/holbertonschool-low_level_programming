#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n = 0;

	tmp = *head;
	tmp = tmp->next;
	n = (*head)->n;
	free(*head);
	*head = tmp;

	return (n);
}
