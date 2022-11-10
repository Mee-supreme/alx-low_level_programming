#include "function_pointers.h"

/**
 * print_name -A funtion that prints a name
 *
 * @name: pointer to name to print
 * @f: function to pointer to print name
 *
 * Return: no return.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
