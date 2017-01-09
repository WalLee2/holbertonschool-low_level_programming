#include "lists.h"
/**
 *
 *
 *
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
