#include "holberton.h"
extern char **environ;
/**
 *_createToken - a function that mallocs space to create tokens
 *@user_input: Takes the input from users
 *Return: The newly malloc'd space
 */
char **_createToken(char *user_input)
{
	char **commands;
	int i, a;

	for (a = 0; user_input[a] != '\0'; a++)
		;
	commands = malloc(sizeof(char *) * 20);
	if (commands == NULL)
	{
		free(commands);
		exit(0);
	}
	i = 0;
	/*commands[i] = malloc(sizeof(char) * a);*/
	commands[i] = strtok(user_input, "\n ");
	while (commands[i] != NULL)
	{
		i++;
		commands[i] = strtok(NULL, "\n ");
	}
	return (commands);
}
/**
 *_createChild_P - a function that creates a child process and executes
 *the built-in function
 *@arrayStr: A variable that takes in the tokenized string
 */
void _createChild_P(char **arrayStr)
{
	pid_t child_p;
	int execve_check, waiting;

	child_p = fork();
	if (child_p == -1)
	{
		perror("Error: Child process not created");
		_exit(0);
	}
	if (child_p == 0)
	{
		execve_check = execve(arrayStr[0], arrayStr, environ);
		if (execve_check == -1)
		{
			write(STDOUT_FILENO,
			       "This command does not exist.", 28);
			write(STDOUT_FILENO, "\n", 1);
			_exit(0);
		}
	}
	else
		wait(&waiting);
}
/**
 *_strdup - A function that takes in the string as a parameter
 *@str: A pointer that points the memory address
 *that holds the string
 *Return: A pointer to a duplicated string or rturns NULL if
 *there was insufficient memory.
 */
char *_strdup(char *str)
{
	unsigned int a, i;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	a++;
	p = malloc((a) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
