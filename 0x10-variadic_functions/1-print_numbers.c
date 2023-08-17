#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 * @...: Variable number of integers.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list op1;
va_start(op1, n);
for (i = 0; i < n; i++)
{
	printf("%d", va_arg(op1, int));
if (separator != NULL && i < n - 1)
	printf("%s", separator);
}
	va_end(op1);
printf("\n");
}
