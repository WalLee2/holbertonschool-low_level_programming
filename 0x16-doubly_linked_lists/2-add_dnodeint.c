#include "lists.h"
/**
 *add_dnodeint - adds a node to the beginning of the linked list
 *@head: a double pointer that holds reference to head
 *@n: The number to be added to the node
 *Return: The new linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head != NULL)
	{
		while ((*head)->prev != NULL)
			*head = (*head)->prev;
		(*head)->prev = new;
	}
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
