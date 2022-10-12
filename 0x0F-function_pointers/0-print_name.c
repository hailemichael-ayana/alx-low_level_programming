#include "function_pointers.h"

/**
 * print_name - print the name
 *
 * @name: string
 *
 * @f: function to print with
 *
 * Return:Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
