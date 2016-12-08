#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *read_textfile - a function that reads a text file and prints it
 *to the standard output
 *@filename: a pointer that points to the address of the file
 *@letters: The number of characters to be printed to std out
 *Return: All characters of size letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t std_out;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);
	std_out = read(fd, buf, letters);
	if (std_out == -1)
		return (0);
	close(fd);
	printf("%s\n", buf);
	return (std_out);
}
