#include "holberton.h"
#include <stdlib.h>
/**
 *append_text_to_file - a function that adds a string to the end of a file
 *@filename: A pointer to the name of a file
 *@text_content: A pointer to a null terminated string
 *Return: 1 if successful, -1 if failed.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, i;

	if (filename == NULL)
		return (-1);
	file_des = open(filename, O_WRONLY | O_APPEND, 0600);
	if (file_des == -1)
	{
		close(file_des);
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		write(file_des, text_content, i);
		return (1);
	}
	close(file_des);
	return (-1);
}
