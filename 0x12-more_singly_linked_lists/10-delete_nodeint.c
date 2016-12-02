#include "lists.h"
/**
 *
 *
 *
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *friend;
	listint_t *friend2_p;
	unsigned int i;

	i = 0;
	friend = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = friend->next;
		free (friend);
		return (1);
	}
	while (i != index)
	{
		friend2_p = friend;
		friend = friend->next;
		if (friend == NULL)
			return (-1);
		i++;
	}
	friend2_p->next = friend->next;
	free(friend);
	return (1);
}
