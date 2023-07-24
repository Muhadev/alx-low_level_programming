#include "main.h"

/**
 * void swap_int - swaps the values of a and b
 *
 * @a: an integer to swap
 * @b: another integer to swap
 * Return: void.
 */

void swap_int(int *a, int *b)
{
int ola;
	ola = *a;
	*a = *b;
	*b = ola;
}
