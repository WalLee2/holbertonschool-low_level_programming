#include "holberton.h"
#include <stdlib.h>
/**
 *create_file - A function that creates a file
 *@filename: A pointer to the name of the file to create
 *@text_content: A pointer to the NULL terminated string
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;


	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		write(fd, text_content, i);
		return (1);
	}
	close(fd);
	return (1);
}
