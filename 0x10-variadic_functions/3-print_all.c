#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints values of different types.
 * @format: List of types of arguments passed to the function.
 * @...: Variable number of arguments.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
char c;
char *str;
va_list(pm);
unsigned int i;
i = 0;
va_start(pm, format);
while (format && format[i])
{
c = format[i];
if (c == 'c')
{
	printf("%c", va_arg(pm, int));
}
else if (c == 'i')
{
	printf("%d", va_arg(pm, int));
}
else if (c == 'f')
{
	printf("%f", va_arg(pm, double));
}
else if (c == 's')
{
	str = va_arg(pm, char *);
if (str == NULL)
{
	printf("(nil)");
}
else
	printf("%s", str);
}
if ((c == 'c' || c == 'i' || c == 'f' || c == 's') && format[i + 1] != '\0')
{
	printf(", ");
}
	i++;
}
va_end(pm);
	printf("\n");
}
