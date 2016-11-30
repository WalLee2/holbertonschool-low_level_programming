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
	const listint_t *print;

	print = h;
	i = 0;
	while (print != NULL)
	{
		printf("%d\n", print->n);
		i++;
		print = print->next;
	}
	return (i);
}
