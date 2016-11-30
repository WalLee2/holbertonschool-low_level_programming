#include "list.h"
/**
 *
 *
 *
 */
void free_list(list_t *head)
{
	list_t next;

	while (head != NULL)
	{
		next = head->str;
		free(head->str);
		free(head);
		head = next;
	}
}
