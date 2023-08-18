#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - print all the nodes of a linked list
 * @h: Linked list to print
 * Return: The number of nodes in a linked list
 */
size_t print_list(const list_t *h)
{
	size_t n;
	char *strp = NULL;
	unsigned int len = 0;
	const list_t *tmp;

	tmp = h;
	for (n = 0; tmp != NULL; n++)
	{
		if (!tmp->str)
		{
			strp = "(nil)";
			len = 0;
		}
		else
		{
			strp = tmp->str;
			len = tmp->len;
		}
		printf("[%d] %s\n", len, strp);
		tmp = tmp->next;
	}
	return (n);
}
