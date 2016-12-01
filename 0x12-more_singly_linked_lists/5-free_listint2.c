#include "lists.h"
/**
 *free_listint2 - a function that frees a list and sets head
 *to NULL.
 *@head: a double pointer that points to the address at the struct
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
