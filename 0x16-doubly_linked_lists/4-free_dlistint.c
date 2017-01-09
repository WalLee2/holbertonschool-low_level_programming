#include "lists.h"
/**
 *free_dlistint - Function that frees a doubly linked list
 *@head: A pointer variable that points to NULL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *helper;

	while (head != NULL)
	{
		helper = head;
		head = head->next;
		free(helper);
	}
}
