#include "holberton.h"

/**
 *_getenv - A function that compares the input value to an environment variable.
 *If the environment variable exists, the result will print out
 *@name: The passed in variable from the main function
 *Return: The pointer to the output of the environment variable or
 *returns NULL otherwise.
 */
/*char *_getenv(const char *name)
{
        int i, j;

        if (name != NULL)
        {
                i = 0;
                while (environ[i] != NULL)
                {
                        j = 0;
                        while(*name == environ[i][j] && *name != '\0')
                        {
                                name++;
                                j++;
                        }
                        if ((environ[i][j]) == '=')
                                return(&environ[i][j + 1]);
                        i++;
                }
        }
        return(NULL);
}
*/
/**
 *
 *
 *
 *
 */
/*
env_list *_get_envLinked(env_list **head, char *str_n, char *str_v)
{
        p_list *current_node, *new_node;
        char *strcpy_n, *strcpy_v;

        current_node = *head;
        strcpy_n = strdup(str_n);
        if (strcpy_n == NULL)
                return (NULL);
        if (strcpy_v == NULL)
                return (NULL);
		new_node = malloc(sizeof(p_list));
        if (new_node == NULL)
        {
                free(new_node);
                return (NULL);
        }
        while (current_node != NULL && current_node->next != NULL)
                current_node = current_node->next;
        new_node->c = strcpy;
        new_node->next = NULL;
        if (new_node == NULL)
        {
                free(new_node);
                return (NULL);
        }
        while (current_node != NULL && current_node->next != NULL)
                current_node = current_node->next;
        new_node->c = strcpy;
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
