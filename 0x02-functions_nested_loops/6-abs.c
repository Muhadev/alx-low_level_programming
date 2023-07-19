#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *
 * @num: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */
int _abs(int num)
{
int last_digit;
	last_digit = num % 10;
if (last_digit < 0)
{
        last_digit = -last_digit;
}
	_putchar(last_digit + '0');
return last_digit;
}
