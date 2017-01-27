#include "lists.h"
/**
 *free_list - A function that frees a list
 *@head: a pointer that points to head in the main function
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
