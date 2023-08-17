#include "function_pointers.h"

/**
 * print_name - Prints a name from a function pointer
 * @name: char string
 * @f: function pointer that takes a string arguement
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
