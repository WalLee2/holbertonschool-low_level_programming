#include "lists.h"

/**
 * get_nodeint_at_index - Find the node at given index and return pointer to it
 * @head: Start of linked list
 * @index: The location of a node
 * Return: A pointer to the location of the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	tmp = head;
	for (i = 0; i < index; i++)
		tmp = tmp->next;

	return (tmp);
}
