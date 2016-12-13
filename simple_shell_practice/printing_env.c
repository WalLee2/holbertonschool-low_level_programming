#include <unistd.h>
#include <stdio.h>
/*extern char **environ;
char main(void)
{
        int i;
        char *selected_env;

	i = 0;
        while (environ[i] != '\0')
        {
                printf("%s\n", environ[i++]);
        }
	}*/

extern char **environ;
char *_getenv(const char *name)
{
	int i, j;
	char *result;

	if (*name != NULL)
	{
		i = j = 0;
		while (environ[i] != '\0')
		{
			while(*name == environ[i][j] && *name != '\0')
			{
				name++;
				j++;
			}
			if((environ[i][j] + 1) == "=")
				j++;
			else
				i++;
			while(environ[i][j] != '\0')
			{
		}
		result = environ[i][j];
	}
	return(result);
}
