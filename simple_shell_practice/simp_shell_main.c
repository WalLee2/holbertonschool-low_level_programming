#include "holberton.h"
/**
 *main - a function that prompts the user for input to run shell commands
 *Return: The function will return 0 on success
 */
int main(void)
{
	char *user_input, **arrayStr, *env_result, **_getPATH_res;
	size_t len;
	/*p_list *head, *current_node;*/
	int a;
	/*env_list *head_e, *current_node_e;*/

	len = a = 0;
	/*head = NULL; head_e = NULL;*/
	/*current_node = head; current_node_e = head_e;*/
	write(STDOUT_FILENO, "$ ", 2);
	while (getline(&user_input, &len, stdin) != -1)
	{
		arrayStr = _createToken(user_input);
		/*printf("I'm before the first function\n");*/
		if (arrayStr[0][0] != '/')
		{
			/*printf("%s\n", arrayStr[outer_a]);*/
			/*printf("I'm before the second function and after the first\n");*/
			env_result = _getenv("PATH");
			/*printf("I'm before the third function and after the second\n");*/
			_getPATH_res = _getPATH(env_result, arrayStr);
			/*while (_getPATH_res[a] != NULL)
			{
				printf("%s\n", _getPATH_res[a]);
				for (i = 0; _getPATH_res[a][i] != '\0'; i++)
					;
				write(STDOUT_FILENO, _getPATH_res[a], i);
				write(STDOUT_FILENO, "\n", 1);
				a++;
			}
			a = 0;*/
			_createChild_P(arrayStr, _getPATH_res);
			write(STDOUT_FILENO, "$ ", 2);
		}
		else
		{
			/*printf("I'm after the first if statement\n");*/
			_createChild(arrayStr);
			write(STDOUT_FILENO, "$ ", 2);
		}
	}
	return (0);
}
/**
 *_get_envLinked - A function that creates a linked list from
 *environment variables
 *@head: A double pointer that points to a struct
 *@str_n: a variable that takes in the name of the variable
 *@str_v: a variable that takes in the value stored in that variable
 *Return: A newly created linked list
 */
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
