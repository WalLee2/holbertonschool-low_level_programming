#include "lists.h"
/**
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *friend;
	int temp;

	if (*head == NULL)
		return (0);
	if (*head != NULL)
	{
		friend = *head;
		temp = (*head)->n;
		*head = (*head)->next;
		free(friend);
	}
	return (temp);
}
