#include "lists.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	if(h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		i++;
		i += print_list(h->next);
	}
	return (i);
}
