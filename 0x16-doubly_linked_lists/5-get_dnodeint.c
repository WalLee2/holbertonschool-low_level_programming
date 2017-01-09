#include "lists.h"
/**
 *get_dnodeint_at_index - Function that returns the nth node
 *of a doubly linked list
 *@head: A pointer variable that is pointing to NULL
 *@index: A variable that contains a number indiciating what node to print
 *Return: NULL if the node does not exist, the correct node if it does exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *head_ref;

	i = 0;
	head_ref = head;
	if (head == NULL)
		return (NULL);
	while (head_ref != NULL && i <= index)
	{
		if (i == index || index == 0)
			return (head_ref);
		head_ref = head_ref->next;
		i++;
	}
	return (NULL);
}
