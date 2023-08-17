#include "variadic_functions.h"
#include <stdarg.h>
/**
 * int sum_them_all - Prints the sum of all its parameters
 * @n: NUmber of arguments. 
 * @...: Variable number of argument.
 * Return: Sum of all the arguments, or 0 if n is 0. 
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list op1;
if (n == 0)
return (0);
va_start(op1, n);
for (i = 0; i < n; i++)
{
	sum += va_arg(op1, int);
}
va_end (op1);
return (sum);
}
