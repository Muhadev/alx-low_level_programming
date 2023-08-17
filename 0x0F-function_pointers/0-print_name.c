#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: pointer to the printing behavior.
 */
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
{
return;
}
	f(name);
}
