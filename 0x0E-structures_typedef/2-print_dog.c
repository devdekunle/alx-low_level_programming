#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
* print_dog - print a struct
*@d: struct variable to print
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		if (d->age == '\0')
			printf("Age: (nil)");

	printf("Name: %s\n", d->name);
	printf("Owner: %s\n", d->owner);
	printf("Age: %f\n", d->age);
	}


}
