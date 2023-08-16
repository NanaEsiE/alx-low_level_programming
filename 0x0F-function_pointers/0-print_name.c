#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: inputa name.
 * @f: function pointer that returns outwhere.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
