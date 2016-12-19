#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stddef.h>
/**
 *struct p1_list - a struct that takes in a character and
 *points to the next node
 *@c: A variable that is character pointer
 *@next: a variable that points to the next member
 */
typedef struct p1_list
{
	char *c;
	struct p1_list *next;
}p_list;
/**
 *struct env1_list - a struct that stores environment variables
 *@name: A character pointer that stores
 *the name of the environment variable
 *@value: A character pointer that stores
 *the value of the environment variable
 *@next: A struct that points to the next node
 */
typedef struct env1_list
{
	char *name;
	char *value;
	struct env1_list *next;
}env_list;
int printing_env(void);
char *_getenv(const char *name);
char *_strdup(char *str);
char **_createToken(char *user_input);
void _createChild_P(char **arrayStr);
p_list *_getPATH(char *str, p_list *head);
p_list *_getP_Linked(p_list **head, char *str);
int _storeEnv(const char *name);
env_list *_get_envLinked(env_list **head, char *str_n, char *str_v);
#endif
