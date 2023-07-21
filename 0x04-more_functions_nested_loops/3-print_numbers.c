#include "main.h"
/**
 * print_numbers - Print the numbers since 0 up to 9
 *
 * Return: The numbers since 0 up to 9
 */
void print_numbers(void)
{
int i;
char buffer[10];

for (i = 0; i <= 9; i++)
{
	buffer[i] = i + '0';
}
	_putchar(buffer, 10);
_putchar('\n');
}
