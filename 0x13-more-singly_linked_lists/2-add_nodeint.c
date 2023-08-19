#include "lists.h"

/**
 * add_nodeint - Add node to the beginning of a list
 * @head: Beginning of a list
 * @n: Integer to add to the new node
 * Return: Address of the new element or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
