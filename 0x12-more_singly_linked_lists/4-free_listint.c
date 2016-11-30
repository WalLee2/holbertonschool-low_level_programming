#include "lists.h"
/**
 *free_listint - a function that frees a list
 *@head: a pointer that points to the head pointer
 */
void free_listint(listint_t *head)
{
	listint_t *friend;

	while (head != NULL)
	{
		friend = head;
		head = head->next;
		free(friend);
	}
}
