#include "lists.h"
/**
 *reverse_listint - A function that reverses a linked list
 *@head: A double pointer that points to the address of the struct
 *Return: NULL if it's an empty list. *head if there is a list to reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (*head != NULL)
	{
		next = current = *head;
		next = next->next;
		current->next = NULL;
		while (next != NULL)
		{
			current = next;
			next = next->next;
			current->next = *head;
			*head = current;
		}
		return (*head);
	}
	return (NULL);
}
