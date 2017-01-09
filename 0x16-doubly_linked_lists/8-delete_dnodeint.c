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

	delete = head_ref = *head;
	if (*head == NULL)
		return (-1);
	for (i = 0; delete != NULL && i < index; i++)
	{
		head_ref = delete;
		delete = delete->next;
	}
	if (i == 0 && head_ref->next != NULL)
	{
		*head = (*head)->next;
		free(head_ref);
		(*head)->prev = NULL;
		return (1);
	}
	else if (i > 0)
	{
		head_ref->next = delete->next;
		delete->next->prev = head_ref;
		free(delete);
		return (1);
	}
	else
	{
		*head = head_ref->next;
		free(head_ref);
		return (1);
	}
	return (-1);
}
