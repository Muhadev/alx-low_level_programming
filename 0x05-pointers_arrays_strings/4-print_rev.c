#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 *
 * @s: Pointer to the string to be printed in reverse.
 * Return: void.
 */

void print_rev(char *s)
{
if (*s != '\0')
{
	print_rev(s + 1);
	_putchar(*s);
}
else
{
_putchar('\n');
}
}

