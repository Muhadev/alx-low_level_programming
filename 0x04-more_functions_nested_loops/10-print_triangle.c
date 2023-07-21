#include "main.h"

/**
 * print_triangle - Print a triangle of '#' character:wq
 * 
 * @size: The size (height) of the triangle.
 */

void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= i; j++)
{
	_putchar('#');
}
_putchar('\n');
}
}
}