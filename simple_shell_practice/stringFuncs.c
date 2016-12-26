#include "holberton.h"
/**
 *
 *
 *
 */
void _createChild(char **arrayStr)
{
        pid_t child_p;
        int waiting, execve_check;

        child_p = fork();
        if (child_p == -1)
        {
                perror("Error: Child process not created");
		free(arrayStr);
                _exit(1);
        }
        if (child_p == 0)
        {
		/*printf("%s\n", _getPATH_res[i]);*/
		execve_check = execve(arrayStr[0], arrayStr, environ);
		if (execve_check == -1)
		{
			write(STDOUT_FILENO,
			      "This command does not exist.", 28);
			write(STDOUT_FILENO, "\n", 1);
			free(arrayStr);
			_exit(1);
		}
        }
        else
                wait(&waiting);
}
