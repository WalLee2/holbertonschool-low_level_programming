#include "lists.h"

dlistint_t *insert_dnodeint_at_idx(dlistint_t **head, unsigned int idx,
				     int n)
{
	dlistint_t *temp, *temp2, *new_node;
	unsigned int count;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		if (idx > 0)
		{
			free(new_node); return (NULL);
		}
		new_node->next = NULL; *head = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *head; (*head)->prev = new_node; *head = new_node;
		return (new_node);
	}
	for (count = 0, temp = *head; temp != NULL && count <= idx;)
	{
		temp2 = temp->next;
		if (count == idx - 1)
		{
			temp->next = new_node;
			new_node->prev = temp;
			if (temp2 == NULL)
				new_node->next = NULL;
			else
			{
				new_node->next = temp2; temp2->prev = new_node;
			}
			return (new_node);
		}
		temp = temp->next; count++;
	}
	return (NULL);
}
