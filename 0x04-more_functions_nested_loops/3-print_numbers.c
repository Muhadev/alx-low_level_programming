#include "main.h"
/**
 * print_numbers - Print the numbers since 0 up to 9
 *
 * Return: The numbers since 0 up to 9
 */
void print_numbers(void)
{
int i;
char digit_char;
for (i = 0; i <= 9; i++)
{
	digit_char = i + '0';
	_putchar(digit_char);
}
_putchar('\n');
}
