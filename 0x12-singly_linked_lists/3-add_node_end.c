#include "lists.h"
#include <string.h>

/**
 * add_node_end - Add a node to the end of a linked list
 * @head: Double pointer to the beginning of a linked list
 * @str: String to add to the new node
 * Return: head of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *tmp = NULL;
	unsigned int n;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	new->str = strdup(str);
	new->len = n;
	new->next = NULL;
	if (!(*head))
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (*head);
}
