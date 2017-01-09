#include "lists.h"
/**
 *sum_dlistint - Function that returns the sum of all integers
 *stored in each node of the linked list
 *@head: Pointer variable that points to NULL
 *Return: The sum of all the integers
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr_n;
	int i;

	curr_n = head;
	i = 0;
	if (head == NULL)
		return (i);
	while (curr_n != NULL)
	{
		i += curr_n->n;
		curr_n = curr_n->next;
	}
	return (i);
}
