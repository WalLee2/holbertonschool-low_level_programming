#include "lists.h"
#include <stdio.h>

/**
 * free_list - Free all blocks of memory allocated to the link list
 * @head: The start of a linked list
 */
void free_list(list_t *head)
{
	list_t *t1;

	t1 = head;
	while (t1)
	{
		t1 = t1->next;
		free(head->str);
		free(head);
		head = t1;
	}
}
