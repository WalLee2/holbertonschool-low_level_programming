#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#define STD_ER STDERR_FILENO
#define BUFFSIZE 1204
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
#endif
