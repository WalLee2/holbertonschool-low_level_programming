#include "lists.h"
#include <stdio.h>
/**
 *print_list - a function that prints out the number of nodes, the length
 *of the word, and the string itself
 *@h: a pointer variable that takes the value of what's
 *being passed to print_list
 *Return: The number of elements
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	if (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		i++;
		i += print_list(h->next);
	}
	return (i);
}
