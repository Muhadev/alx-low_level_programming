#include "main.h"

/**
 *  _isupper - Checks if a character is lowercase
 * @c: The character to check
 * Return: 1 if c is upper letter, 0 otherwise
 */

int _isupper(int c)

{

if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
