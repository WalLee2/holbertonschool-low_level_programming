#include "lists.h"
/**
 *add_dnodeint_end - Function that adds to the end of a doubly linked list
 *@head: A double pointer that points to NULL
 *@n: A number to be stored in the linked list
 *Return: The new linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *head_ref;
	dlistint_t *new;

	head_ref = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (head_ref != NULL && head_ref->next != NULL)
		head_ref = head_ref->next;
	new->n = n;
	new->prev = head_ref;
	if (head_ref != NULL)
	{
		head_ref->next = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
