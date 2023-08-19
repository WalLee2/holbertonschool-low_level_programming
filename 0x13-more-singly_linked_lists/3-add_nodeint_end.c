#include "lists.h"

/**
 * add_nodeint_end - Add a node from the end of a linked list
 * @head: The beginning of a linked list
 * @n: The integer to add to the new node
 * Return: The address of the new node or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (!(*head))
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		new->next = tmp->next;
		tmp->next = new;
	}

	return (new);
}
