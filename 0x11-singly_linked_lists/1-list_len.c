#include "lists.h"
/**
 *list_t - A function that returns the number of
 *elements in a linked list_t list
 *@h: A pointer variable that takes in the value
 *of what is being passed into list_len in the main function
 *Return: The number of iterations that the function is being called
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	if (h != NULL)
	{
		i++;
		i += list_len(h->next);
	}
	return (i);
}
