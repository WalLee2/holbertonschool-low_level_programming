#include "lists.h"
#include <stdio.h>
/**
 *print_listint - a function that prints all the numbers of
 *an element.
 *@h: a pointer variable that takes in the value stored in what is
 *being passed to it
 *Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
