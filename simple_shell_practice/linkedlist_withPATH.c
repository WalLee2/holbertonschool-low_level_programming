#include "holberton.h"
extern char **environ;
/**
 *main - prints out the output of the environment variable
 *Return: The output returns 0;
 */
/*int printing_PATH(char *str)
{
        int i;
        char *mod_str;
	p_list *result;

	mod_str = _getenv("PATH");
	result = _getPATH(mod_str);
	while (result != NULL)
	{
		for (i = 0; result->c[i] != '\0'; i++)
			;
		write(STDOUT_FILENO, result->c, i);
		write(STDOUT_FILENO, "\n", 1);
		result = result->next;
	}
	return (0);
	}*/
/**
 *_getenv - A function that compares the input value to an environment variable.
 *If the environment variable exists, the result will print out
 *@name: The passed in variable from the main function
 *Return: The pointer to the output of the environment variable or
 *returns NULL otherwise.
 */
char *_getenv(const char *name)
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
/**
 *_getPATH - a function that separates each directory of PATH on a newline
 *@str: a pointer to a string that the user input
 *Return: a linked list that stores each directory in the PATH
 */
p_list *_getPATH(char *str)
{
	char *tok;
	p_list *head;

	head = NULL;
	tok = strtok(str, ":");
	while (tok != NULL)
	{
		_getP_Linked(&head, tok);
		tok = strtok(NULL, ":");
	}
	return (head);
}
/**
 *_getP_Linked - a function that creates a linked list, for PATH environment
 *and stores each directory in a node
 *@head: Takes in the address of *head
 *@str: takes in a string
 *Return: the new linked list
 */
p_list *_getP_Linked(p_list **head, char *str)
{
	p_list *current_node, *new_node;
	char *strcpy;

	current_node = *head;
	strcpy = _strdup(str);
	if (strcpy == NULL)
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
	if (current_node != NULL)
		current_node->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
/**
 *
 *
 *
 */
int _storeEnv(const char *name)
{
	int i;

	i = 0;
	while (name != NULL)
	{
		name = strtok(environ[i], "=");
		value = _getenv(name);
		_addnode(name, value, &head_e);
	}
}
/*int _setenv(const char *name, const char *value, int overwrite)
{
	char *mod_str;

	mod_str = _getenv(name);
	if (mod_str == NULL)
		_getenvPATH(&head, value);
		}*/
