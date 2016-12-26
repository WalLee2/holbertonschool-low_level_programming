#include "holberton.h"
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
		_exit(1);
	}
	i = 0;
	commands[i] = malloc(sizeof(char) * a);
	if (commands[i] == NULL)
	{
		free(commands[i]);
		free(commands);
		_exit(1);
	}
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
void _createChild_P(char **arrayStr, char **_getPATH_res)
{
	pid_t child_p;
	int waiting, i;

	child_p = fork();
	if (child_p == -1)
	{
		perror("Error: Child process not created");
		_exit(0);
	}
	if (child_p == 0)
	{
		i = 0;
		while (_getPATH_res[i] != NULL)
		{
			/*printf("%s\n", _getPATH_res[i]);*/
			if(execve(_getPATH_res[i], arrayStr, environ) != -1)
			{
				write(STDOUT_FILENO,
				      "This command does not exist.", 28);
				write(STDOUT_FILENO, "\n", 1);
				break;
			}
			i++;
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
/**
 *_strcat - A function that concatenates two strings.
 *@dest: a variable that holds the string that will be appended to src.
 *@src: a variable that holds a string that will be appended to.
 *Return: The wole string is returned.
 */
char *_strcat(char *dest, char *src)
{
	int i, a;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	a = 0;
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 *_memset - a function that fills memory with a constant byte.
 *@s: a pointer that points to the memory area
 *@b: a constant byte
 *@n: a fixed number of bytes
 *Return: returns new output
 */
/*char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m = 0;

	while (m < n)
	{
		s[m] = b;
		m++;
	}
	return (s);
	}*/
/**
 *_strcpy - Function that copes the string pointed to by src, including the
 *terminating null byte, to the buffer pointed to by dest
 *
 *@src: variable that holds the string.
 *
 *@dest: variable receiving the string.
 *
 *Return: The string is returned.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
