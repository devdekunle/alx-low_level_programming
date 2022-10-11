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

		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
	}


}
