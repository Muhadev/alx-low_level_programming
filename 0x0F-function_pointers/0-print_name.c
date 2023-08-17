#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name using a given printing function.
 * @name: The name to be printed.
 * @f: A function pointer that determines
 * the printing behavior.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
