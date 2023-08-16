#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Description:
 * This function prints the attributes of a struct dog. If an element of the struct
 * is NULL, it prints "(nil)" instead of the element's value. If the pointer d is NULL,
 * it does not print anything.
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
