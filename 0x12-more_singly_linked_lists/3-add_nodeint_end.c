#include "lists.h"
/**
 *add_nodeint_end - a function that adds a new node at the end
 *of a list
 *@head: a double pointer pointing to the address to the struct
 *@n: The number to be printed
 *Return: the new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_p;

	while (current_p && current_p->next != NULL)
		current_p = current_p->next;
	current_p = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (current_p != NULL)
		current_p->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
