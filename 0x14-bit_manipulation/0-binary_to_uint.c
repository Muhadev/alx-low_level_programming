#include "main.h"
/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0
 * if there's an invalid character or NULL.
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int result = 0;
unsigned int base = 1;
int length = strlen(b);
if (b == NULL)
return (0);
for (i = length - 1; i >= 0; i--)
{
if (b[i] == '1')
{
	result += base;
}
else if (b[i] != '0')
{
return (0);
}
	base *= 2;
}
return (result);
}
