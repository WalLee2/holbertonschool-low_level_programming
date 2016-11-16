#include "function_pointers.h"
/**
 *print_name - a function that prints a name
 *@name: a pointer variable that points to a string
 *@f: a void pointer variable
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
