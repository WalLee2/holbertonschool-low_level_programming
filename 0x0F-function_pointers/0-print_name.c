#include "function_pointers.h"

/**
 * print_name - Function that calls a function pointer and passes parameters
 * @name: Name to print
 * @f: Function pointer used to print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		f(name);
	}
}
