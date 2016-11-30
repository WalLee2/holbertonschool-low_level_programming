#include "lists.h"
/**
 *
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *friend;

	while (*head != NULL)
	{
		friend = *head;
		*head = (*head)->next;
		free(friend);
	}
}
