#include "sort.h"
/**
 *
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *hlp, *rf_pt;
	int i;

	hlp = *list;
	i = 0;
	while (hlp != NULL)
	{
		rf_pt = hlp->next;
		while (hlp->prev != NULL && (hlp->n > rf_pt->n))
			hlp = hlp->prev;
		if (hlp->n < rf_pt->n)
		{
			hlp->next = rf_pt->next;
			if (rf_pt->next != NULL)
				rf_pt->next->prev = hlp;
			rf_pt->next = hlp;
/*			rf_pt->prev = hlp->prev;*/
			rf_pt->prev = hlp->prev;
			if (hlp->prev != NULL)
				hlp->prev->next = rf_pt;
			rf_pt->next = hlp;
			hlp->prev = rf_pt;
			print_list(*list);
/*			insertion_sort_list(&rf_pt->prev);*/
			hlp = hlp->next;
			i++;
		}
/*		else if (hlp->prev == NULL && rf_pt->n > hlp->n)
		{
			hlp->prev = rf_pt;
			rf_pt->next = hlp;
			rf_pt->prev = NULL;
			}*/
		else
		{
			hlp = hlp->next;
			printf("I'm in the else statement!\n");
			i++;
		}
		printf("Already looped: %d\n", i);
	}
}
