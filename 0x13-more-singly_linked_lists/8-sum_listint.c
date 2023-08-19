#include "lists.h"

/**
 * sum_listint - Sum all the values found in nodes of a linked list
 * @head: Start of linked list
 * Return: Sum of values
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *tmp;

	tmp = head;
	while (tmp)
	{
		total += tmp->n;
		tmp = tmp->next;
	}
	return (total);
}
