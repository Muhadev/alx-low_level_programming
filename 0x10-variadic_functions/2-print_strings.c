#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: String to be printed between strings.
 * @n: Number of strings passed to the function.
 * @...: Variable number of strings.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list op1;
va_start(op1, n);
for (i = 0; i < n; i++)
{
char *str = va_arg(op1, char *);
if (str == NULL)
	printf("(nil)");
else
	printf("%s", str);
if (separator != NULL && i < n - 1)
	printf("%s", separator);
}
va_end(op1);
printf("\n");
}
