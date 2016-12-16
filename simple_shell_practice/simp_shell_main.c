#include "holberton.h"
#include <stddef.h>
/**
 *
 *
 *
 */
int main(void)
{
	char *user_input, **token;
	size_t len;
	int i;
	p_list *head, *current_node;
	env_list *head_e, *current_node_e;

	head = NULL;
	head_e = NULL;
	current_node = head;
	current_node_e = head_e;
	write(STDOUT_FILENO, "$ ", 2);
	while (getline(&user_input, &len, stdin) != -1)
	{
		token = malloc(sizeof(len));
		if (token == NULL)
		{
			free(token);
			exit (0);
			}
		i = 0;
		token[i] = strtok(user_input, " ");
		while (token[i] != NULL)
		{
			token[i] = strtok(NULL, " ");
			i++;
		}
		execve(token[0], token, NULL);
		write(STDOUT_FILENO, "$ ", 2);
	}
	return (0);
}
/**
 *
 *
 *
 *
 */
/*
env_list *_get_envLinked(env_list **head, char *str_n, char *str_v)
{
	env_list *current_node, *new_node;
        char *strcpy_n, *strcpy_v;

        current_node = *head;
        strcpy_n = _strdup(str_n);
        if (strcpy_n == NULL)
                return (NULL);
	strcpy_v = _strdup(str_v);
	if (strcpy_v == NULL)
		return (NULL);
        new_node = malloc(sizeof(env_list));
        if (new_node == NULL)
        {
                free(new_node);
                return (NULL);
        }
        while (current_node != NULL && current_node->next != NULL)
		current_node = current_node->next;
        new_node->name = strcpy_n;
	new_node->value = strcpy_v;
        new_node->next = NULL;
        if (new_node == NULL)
        {
                free(new_node);
		return (NULL);
	}
        if (current_node != NULL)
                current_node->next = new_node;
        else
                *head = new_node;
        return (new_node);

}
*/
