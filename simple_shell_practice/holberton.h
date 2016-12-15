#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct p1_list
{
	char *c;
	struct p1_list *next;
}p_list;
typedef struct env1_list
{
	char *name;
	char *value;
	struct env1_list *next;
}env_list;
int printing_env(void);
char *_getenv(const char *name);
char *_strdup(char *str);
p_list *_getPATH(char *str);
p_list *_getP_Linked(p_list **head, char *str);
int _storeEnv(const char *name);
env_list *_get_envLinked(env_list **head, char *str_n, char *str_v);
#endif
