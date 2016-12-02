#include "lists.h"
/**
 *
 *
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	next = current = *head;
	next = next->next;
	current->next = NULL;
	while (next != NULL)
	{
		current = next;
		next = next->next;
		current->next = *head;
		*head = current;
	}
	return (*head);
}
