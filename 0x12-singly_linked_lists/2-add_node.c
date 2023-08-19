#include "lists.h"
#include <string.h>

/**
 * add_node - Add new node to the beginning of a linked list
 * @head: Double pointer to the start of the linked list
 * @str: String to add to the new node
 * Return: New node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	unsigned int n;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	for (n = 0; new->str[n] != '\0'; n++)
		;
	new->len = n;
	new->next = *head;
	*head = new;

	return (*head);
}
