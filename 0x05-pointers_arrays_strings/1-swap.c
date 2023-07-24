#include "main.h"

/**
 * void swap_int - swaps the values of a and b
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
int ola;
	ola = *a;
	*b = *a;
	*b = ola;
}
