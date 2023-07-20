#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
long j = 1, k = 2, sum = k;
while (k + j < 4000000)
{
	k += j;
if (k % 2 == 0)
	sum += k;
	j = k - j;
}
	printf("%ld\n", sum);
return (0);
}
