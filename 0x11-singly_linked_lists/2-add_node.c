#include "lists.h"
#include <string.h>
/**
 *
 *
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for(i = 0; str[i] != '\0'; i++)
		;
	new->len = i;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (*head);
}
