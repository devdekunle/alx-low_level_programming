#include "dog.h"
/**
* init_dog - initaialize struct
*@d: struct variable to initailize
*@name: name
*@age: age
*@owner: owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = *name;
	d->age = *age;
	d->owner = *owner;



}
