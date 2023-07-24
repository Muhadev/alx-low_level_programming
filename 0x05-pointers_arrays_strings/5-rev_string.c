#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed.
 * Return: void
 */

void rev_string(char *s)
{
int c = 0;
char *a = s;
char ola;
int i;
while (s[c] != '\0')
{
	c++;
}
	a += (c - 1);

for (i = 0; i < (c / 2); i++)
{
	ola = s[i];
	s[i] = *a;
	*a = ola;
	a--;
}
}
