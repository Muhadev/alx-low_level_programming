#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
#include <stdio.h>
int main() {
int fib[50];
	fib[0] = 1;
	fib[1] = 2;
for (int i = 2; i < 50; i++)
{
	fib[i] = fib[i - 1] + fib[i - 2];
}
for (int i = 0; i < 50; i++)
{
	printf("%d", fib[i]);
if (i < 49) {
	printf(", ");
}
else
{
	printf("\n");
}
}
return 0;
}
