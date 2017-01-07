#include "lists.h"
/**
 *add_dnodeint - adds a node to the beginning of the linked list
 *@head: a double pointer that holds reference to head
 *@n: The number to be added to the node
 *Return: The new linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	head = new_node;
	new_node->prev = new_node;
}
