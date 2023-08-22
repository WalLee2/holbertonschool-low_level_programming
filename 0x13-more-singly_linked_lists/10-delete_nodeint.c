#include "lists.h"

/**
 * delete_nodeint_at_index - Delete node at a given index
 * @head: The start of a linked list
 * @index: The node to delete
 * Return: 1 on success and -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t1 = NULL, *t2 = NULL;
	unsigned int j;

	if (!(*head))
		return (-1);

	t1 = *head;
	for (j = 0; t1 && j < (index - 1); j++)
		t1 = t1->next;

	if (!index)
	{
		t1 = (*head)->next;
		free(*head);
		*head = t1;
	}
	else
	{
		t2 = t1->next;
		t1->next = t2->next;
		free(t2);
	}
	return (1);
}
