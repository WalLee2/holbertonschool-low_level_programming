#include "lists.h"
/**
 *insert_nodeint_at_index - A function that inserts a
 *new node at a given position
 *@head: a double pointer pointing to the address of the struct
 *@index: a variable that indicates where the node number n should be inserted
 *@n: A variable that contains the data to be stored in the new node
 *Return: NULL if you can't add the new node at index,
 *new node if the index exists
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int i;
	listint_t *new_insert;
	listint_t *friend;

	friend = *head;
	i = 0;
	new_insert = malloc(sizeof(listint_t));
	if (new_insert == NULL)
		return (NULL);
	new_insert->n = n;
	if (index == 0)
	{
		new_insert->next = friend;
		*head = new_insert;
		return (new_insert);
	}
	if (friend == NULL)
		return (NULL);
	while (i != (index - 1))
	{
		friend = friend->next;
		if (friend == NULL)
		{
			free(new_insert);
			return (NULL);
		}
		i++;
	}
	new_insert->next = friend->next;
	friend->next = new_insert;
	return (new_insert);
}
