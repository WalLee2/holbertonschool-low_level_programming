<<<<<<< HEAD
#include "list.h"
/**
 *
 *
 *
 */
void free_list(list_t *head)
{
	list_t next;

	while (head != NULL)
	{
		next = head->str;
=======
#include "lists.h"
/**
 *free_list - A function that frees a list
 *@head: a pointer that points to head in the main function
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
>>>>>>> f73b476f5f4ea66252534c455536240e1c7b3d43
		free(head->str);
		free(head);
		head = next;
	}
}
