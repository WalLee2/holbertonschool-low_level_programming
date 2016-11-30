#include "lists.h"
/**
 *listint_len - a function that returns the number of elements
 *in a linked list.
 *@h: A pointer that takes in the value of what's being passed
 *Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i;
	const listint_t *print;

	print = h;
	i = 0;
	while (print != NULL)
	{
		i++;
		print = print->next;
	}
	return (i);
}
