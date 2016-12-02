#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
/**
 *insert_nodeint_at_index - A function that inserts a new node
 *at a given valid position
 *@head: a pointer that points to the address of the struct
 *@index: a variable that indicates where the node number n should be inserted
 *@n: a variable that contains the data to be stored in the new node
 *Return: NULL if the node does not exist. The address of the new node exists
 */
listint_t *insert_nodeint_at_index(listint_t **head,
unsigned int index, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
#endif
