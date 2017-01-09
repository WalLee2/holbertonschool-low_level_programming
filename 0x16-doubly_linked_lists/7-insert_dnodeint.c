#include "lists.h"
/**
 *insert_dnodeint_at_idx - Function that adds a node to the doubly linked list
 *@head: A double pointer holding reference to the beginning of the linked list
 *@idx: The index that the node should be added
 *@n: The number to be added to the new node
 *Return: The adjusted doubly linked list
 */
dlistint_t *insert_dnodeint_at_idx(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *head_b, *head_aft, *new;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		if (idx > 0)
			free(new); return (NULL);
		new->next = NULL; *head = new;
		return (new);
	}
	new->n = n; head_b = head_aft = *head;
	if (idx == 0)
	{
		new->prev = NULL;
		head_b->prev = new; new->next = *head; *head = new;
		return (new);
	}
	else if (idx != 0)
	{
		for (i = 0; i <= idx && head_aft != NULL; i++)
		{
			head_b = head_aft->next;
			if (i == idx - 1)
			{
				head_aft->next = new; new->prev = head_aft;
				if (head_b == NULL)
					new->next = NULL;
				else
				{
					new->next = head_b; head_b->prev = new;
				}
				return (new);
			}
			head_aft = head_aft->next;
		}
	}
	return (NULL);
}
