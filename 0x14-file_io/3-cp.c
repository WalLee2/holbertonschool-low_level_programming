#include "holberton.h"
#include <stdio.h>
/**
 *main - A function that copies the contents of one file to another
 *@argc: The number of arguments
 *@argv: Name of the files being passed
 *Return: 0 if the function was successful
 */
int main(int argc, char *argv[])
{
	char buf[BUFFSIZE];
	int fd_read, fd_write, close_check;
	ssize_t reading_from, writing_to;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STD_ER, "Usage: cp file_from file_to\n"), exit(97);
	fd_read = open(argv[1], O_RDONLY);
	if (fd_read == -1)
		dprintf(STD_ER, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd_write == -1)
		dprintf(STD_ER, "Error: Can't write to %s\n", argv[2]), exit(99);
	reading_from = 1;
	while (reading_from)
	{
		reading_from = read(fd_read, buf, BUFFSIZE);
		if (reading_from == -1)
		{
			dprintf(STD_ER, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (reading_from > 0)
		{
			writing_to = write(fd_write, buf, reading_from);
			if (writing_to == -1 || writing_to != reading_from)
				dprintf(STD_ER, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	close_check = close(fd_read);
	if (close_check == -1)
		dprintf(STD_ER, "Error: Can't close fd %d\n", fd_read), exit(100);
	close_check = close(fd_write);
	if (close_check == -1)
		dprintf(STD_ER, "Error: Can't close fd %d\n", fd_write), exit(100);
	return (0);
}
