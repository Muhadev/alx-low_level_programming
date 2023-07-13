#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of the char is: %zu byte(s).\n", sizeof(char));
printf("Size of the int is: %zu byte(s).\n", sizeof(int));
printf("Size of the long int is: %zu byte(s).\n", sizeof(long int));
printf("Size of the long long int is: %zu byte(s).\n", sizeof(long long int));
printf("Size of the float is: %zu byte(s).\n", sizeof(float));
return (0);
}
