#include "lists.h"
/**
 *insert_dnodeint_at_idx - Function that adds a node to the doubly linked list
 *@h: A double pointer holding reference to the beginning of the linked list
 *@idx: The index that the node should be added
 *@n: The number to be added to the new node
 *Return: The adjusted doubly linked list
 */
dlistint_t *insert_dnodeint_at_idx(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head_b, *head_aft, *new; unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		if (idx > 0)
		{
			free(new); return (NULL);
		}
		*h = new; new->next = NULL; new->prev = NULL; return (new);
	}
	new->prev = NULL; head_b = head_aft = *h;
	if (idx == 0)
	{
		head_b->prev = new; new->next = *h; *h = new;
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
