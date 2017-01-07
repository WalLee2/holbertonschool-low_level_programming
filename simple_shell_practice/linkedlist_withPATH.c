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
char **_getPATH(char *str, char **tok_UsInput)
{
	char *tok, *tempstr, *fwd_slash, **temp_arr, *PATH_cpy;
	int i, a, BUFSIZE, count;

	i = a = 0;
	BUFSIZE = 1024;
	fwd_slash = "/";
	for (count = 0; str[count] != '\0'; count++)
		;
	PATH_cpy = malloc(sizeof(char) * count);
	if (PATH_cpy == NULL)
	{
		free(PATH_cpy);
		exit(1);
	}
	_strcpy(PATH_cpy, str);
	tok = strtok(PATH_cpy, ":");
	/*write (STDIN_FILENO, "I'm before the while loop\n", 27);*/
	temp_arr = malloc(sizeof(char *) * BUFSIZE);
	if (tempstr == NULL)
	{
		free(temp_arr);
		exit(1);
	}
	while (tok != NULL)
	{
		tempstr = malloc(sizeof(char) * BUFSIZE);
		if (tempstr == NULL)
		{
			free(tempstr);
			exit(1);
		}
		_strcat(tempstr, tok);
		/*printf("tok is %s\n", tok);*/
		_strcat(tempstr, fwd_slash);
		_strcat(tempstr, tok_UsInput[a]);
		tok = strtok(NULL, ":");
		/*write (STDIN_FILENO, "I'm in the while loop\n", 23);*/
		temp_arr[i] = tempstr;
		/*printf("%s\n", tempstr);*/
		/*_memset(tempstr, 0, BUFSIZE);*/
		i++;
	}

	/*write (STDIN_FILENO, "I'm after the while loop\n", 28);*/
	/*_getP_Linked(&head, tempstr);*/
	return (temp_arr);
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
/*
int _storeEnv(const char *name)
{
	int i;
	env_list value;

	i = 0;
	while (name != NULL)
	{
		name = strtok(environ[i], "=");
		value = _getenv(name);
		_addnode(name, value, &head_e);
	}
	}*/
/*int _setenv(const char *name, const char *value, int overwrite)
{
	char *mod_str;

	mod_str = _getenv(name);
	if (mod_str == NULL)
		_getenvPATH(&head, value);
		}*/