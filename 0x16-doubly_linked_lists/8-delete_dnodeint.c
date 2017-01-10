#include "lists.h"
/**
 *delete_dnodeint_at_index - Function that deletes the node at index
 *of a linked list
 *@head: A pointer variable that points to the beginning of the linked list
 *@index: The node to be deleted
 *Return: 1 on success and -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete, *head_ref;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	delete = head_ref = *head;
	for (i = 0; delete != NULL && i < index; i++)
		delete = delete->next;
	if (i < index)
		return (-1);
	if (i == 0 && delete->next != NULL)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		head_ref = *head;
		free(delete);
	}
	else if (i > 0)
	{
		head_ref = delete;
		head_ref = head_ref->prev;
		head_ref->next = delete->next;
		free(delete);
	}
	else
	{
		*head = delete->next;
		free(delete);
	}
	return (1);
}
