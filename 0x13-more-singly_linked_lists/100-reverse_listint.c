#include "lists.h"

/**
 *
 *
 *
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *s1, *s2;

	s1 = *head;
	s2 = s1->next;
	s1->next = NULL;
	while (*(head))
	{
		*head = s2->next;
		s2->next = s1;
		s1 = s2;
		s2 = *head;
	}
	*(head) = s1;
	return (*(head));
}
