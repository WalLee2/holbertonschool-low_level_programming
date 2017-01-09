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
	dlistint_t *head_ref_bef, *head_ref_aft, *new_n;
	unsigned int i;

	if (*head == NULL && idx > 0)
		return (NULL);
	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	head_ref_bef = head_ref_aft = *head;
	if (idx == 0)
	{
		new_n->prev = NULL;
		head_ref_bef->prev = new_n; new_n->next = *head; *head = new_n;
		return (new_n);
	}
	else if (idx != 0)
	{
		for (i = 0; i <= idx && head_ref_aft != NULL; i++)
		{
			head_ref_bef = head_ref_aft->next;
			if (i == idx - 1)
			{
				head_ref_aft->next = new_n;
				new_n->prev = head_ref_aft;
				if (head_ref_bef == NULL)
					new_n->next = NULL;
				else
				{
					new_n->next = head_ref_bef;
					head_ref_bef->prev = new_n;
				}
				return (new_n);
			}
			head_ref_aft = head_ref_aft->next;
		}
	}
	return (NULL);
}