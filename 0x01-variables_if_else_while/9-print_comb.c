#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
for (number = 0; number < 10; number++)
{
if (number != 0) 
{
	putchar(',');
	putchar(' ');
}
	putchar('0' + number);
}
putchar('\n');
return (0);
}
